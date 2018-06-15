#ifndef LISTITEM_H
#define LISTITEM_H

#include <reader.h>
#include <book.h>

class ListItem : public QListWidgetItem
{
public:
    explicit ListItem(QListWidget *parent = 0);
    ~ListItem();
    Reader *reader;
    Book *book;
};

#endif // LISTITEM_H
