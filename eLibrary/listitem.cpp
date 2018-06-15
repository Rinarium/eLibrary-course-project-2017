#include "listitem.h"

ListItem::ListItem(QListWidget *parent) :
    QListWidgetItem(parent, 0)
{
    reader = nullptr;
    book = nullptr;
}

ListItem::~ListItem()
{

}

