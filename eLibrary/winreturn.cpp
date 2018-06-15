#include "winreturn.h"
#include "ui_winreturn.h"

WinReturn::WinReturn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WinReturn)
{
    ui->setupUi(this);
    connect(ui->bookWidget, SIGNAL(itemSelectionChanged()), this, SLOT(bookItem_selected()));
    ui->searchLine->setPlaceholderText("Поиск...");
}

WinReturn::~WinReturn()
{
    delete ui;
}

void WinReturn::fill_information(Reader *READER, QList<Book> &BOOKLIST)
{
    reader = READER;
    int position;
    QVariant id;
    for(int i = 0; i < reader->get_book().size(); i++)
    {
        ListItem *item = new ListItem();
        position = 0;
        while (BOOKLIST[position].get_id() != reader->get_book()[i].id) position++;
        item->book = &BOOKLIST[position];
        id = i;
        item->setData(Qt::UserRole, id);
        item->setText(item->book->get_name());
        ui->bookWidget->addItem(item);
    }
    ui->bookWidget->sortItems(Qt::AscendingOrder);
    current_itemBook = (ListItem*) ui->bookWidget->item(0);
    ui->bookWidget->activateWindow();
    ui->bookWidget->setCurrentItem(current_itemBook);
    current_itemBook->setSelected(true);

    ui->info_dateReal->setText(QDate::currentDate().toString("dd.MM.yyyy"));
}

void WinReturn::on_bookWidget_itemClicked(QListWidgetItem *item)
{
    ListItem* equal_item;
    equal_item = (ListItem*) item;
    book = equal_item->book;
    returnID = equal_item->data(Qt::UserRole).toInt();
    ui->info_bookName->setText(equal_item->book->get_name());
    ui->info_dateReturn->setText(reader->get_book()[returnID].dateEnd.toString("dd.MM.yyyy"));
    retard = false;

    ui->info_warning->clear();
    if(reader->get_book()[returnID].dateEnd < QDate::currentDate())
    {
        ui->info_warning->setText("!черный список!");
        retard = true;
    }
}

void WinReturn::on_searchLine_textChanged(const QString &text)
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

void WinReturn::bookItem_selected()
{
    current_itemBook = (ListItem*) ui->bookWidget->currentItem();
    emit ui->bookWidget->itemClicked(current_itemBook);
}

void WinReturn::on_cancel_pushButton_clicked()
{
    this->hide();
}

void WinReturn::on_add_pushButton_clicked()
{
    history moment;

    moment = reader->get_book()[returnID];
    moment.dateEnd = QDate::currentDate();

    if (ui->info_status->currentText() != "нормальное")
    {
        retard = true;
        moment.status = ui->info_status->currentText();
        book->set_quantity(book->get_available());
    }
    else
    {
        moment.status = "возвращена";
        book->set_available(book->get_available()+1);
    }

    reader->set_history(moment);
    reader->unset_book(reader->get_book()[returnID]);

    if (retard)
    {
       if (reader->get_checkBlacklist())
       {
           int position = 0;
           while (reader->get_history()[position].id != -1 || reader->get_history()[position].status != "активен")
               position++;
           moment.id = reader->get_history()[position].id;
           moment.dateBeging = reader->get_history()[position].dateBeging;
           moment.dateEnd = reader->get_history()[position].dateEnd.addMonths(6);
           moment.status = reader->get_history()[position].status;
           reader->unset_history(reader->get_history()[position]);
           reader->set_history(moment);
       }
       else
       {
           moment.id = -1;
           moment.dateBeging = QDate::currentDate();
           moment.dateEnd = QDate::currentDate().addMonths(6);
           moment.status = "активен";
           reader->set_history(moment);
           reader->set_checkBlacklist(true);
       }
    }

    reader->set_checkChanged(true);
    book->set_checkChanged(true);

    this->accept();
}
