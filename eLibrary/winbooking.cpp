#include "winbooking.h"
#include "ui_winbooking.h"

WinBooking::WinBooking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WinBooking)
{
    ui->setupUi(this);
    connect(ui->bookWidget, SIGNAL(itemSelectionChanged()), this, SLOT(bookItem_selected()));
    ui->searchLine->setPlaceholderText("Поиск...");
}

WinBooking::~WinBooking()
{
    delete ui;
}

void WinBooking::fill_information(Reader *READER, QList<Book> &BOOKLIST)
{
    reader = READER;

    for(int i = 0; i < BOOKLIST.size(); i++)
    {
        if (BOOKLIST[i].get_checkDeleted()) continue;
        ListItem *item = new ListItem();
        item->book = &BOOKLIST[i];
        item->setText(item->book->get_name());
        ui->bookWidget->addItem(item);
    }
    ui->bookWidget->sortItems(Qt::AscendingOrder);
    current_itemBook = (ListItem*) ui->bookWidget->item(0);
    ui->bookWidget->activateWindow();
    ui->bookWidget->setCurrentItem(current_itemBook);
    current_itemBook->setSelected(true);


    ui->info_readerName->setText(reader->get_last_name()+' '+reader->get_name()+' '+reader->get_middle_name());
    ui->info_dateFrom->setText(QDate::currentDate().toString("dd.MM.yyyy"));
    ui->dateTo_Edit->setDate(QDate::currentDate());
    ui->dateTo_Edit->setMinimumDate(QDate::currentDate());
}

void WinBooking::on_bookWidget_itemClicked(QListWidgetItem *item)
{
    ListItem* equal_item;
    equal_item = (ListItem*) item;
    book = equal_item->book;
    ui->info_bookName->setText(equal_item->book->get_name());
    QString converter;
    converter.setNum(book->get_available());
    ui->info_available->setText(converter);
    if(!book->get_available()) ui->add_pushButton->setEnabled(false);
    else ui->add_pushButton->setEnabled(true);
}

void WinBooking::on_searchLine_textChanged(const QString &text)
{
    QString enteredText = text.toLower();
    QListWidgetItem *item;
    QStringList separateName,
                separateText = enteredText.split(' ');
    bool check = false;

    for (int i = 0; i < ui->bookWidget->count(); i++)
    {
        item = ui->bookWidget->item(i);
        separateName = item->text().split(' ');

        for (int j = 0; j < separateName.size(); j++)
        {
            separateName[j] = separateName[j].toLower();

            if (separateText.size() == 1)
            {
                if (!separateName[j].indexOf(enteredText, 0))
                {
                    if (item->isHidden()) item->setHidden(false);
                    if(!check)
                    {
                        ui->bookWidget->setCurrentItem(item);
                        item->setSelected(true);
                        check = true;
                    }
                    break;
                }
                else item->setHidden(true);
            }
            else
            {
                for (int k = 0; k < separateName.size(); k++)
                {
                    if (separateName[k] != separateText[0]) continue;
                    if (item->text().toLower().indexOf(enteredText, 0) >= 0)
                    {
                        if (item->isHidden()) item->setHidden(false);
                        if(!check)
                        {
                            ui->bookWidget->setCurrentItem(item);
                            item->setSelected(true);
                            check = true;
                        }
                        break;
                    }
                    else item->setHidden(true);
                }
            }
        }
    }
}

void WinBooking::bookItem_selected()
{
    current_itemBook = (ListItem*) ui->bookWidget->currentItem();
    emit ui->bookWidget->itemClicked(current_itemBook);
}

void WinBooking::on_cancel_pushButton_clicked()
{
    this->hide();
}

void WinBooking::on_add_pushButton_clicked()
{
    struct book newBook;
    newBook.id = book->get_id();
    newBook.dateBeging = QDate::currentDate();
    newBook.dateEnd = ui->dateTo_Edit->date();

    reader->set_book(newBook);
    reader->set_checkChanged(true);

    book->set_available(book->get_available()-1);
    book->set_checkChanged(true);

    this->accept();
}
