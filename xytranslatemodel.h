﻿#ifndef XYLISTMODEL_H
#define XYLISTMODEL_H

#include <QObject>
#include "xytranslateitem.h"

class XYTranslateModel : public QObject
{
    Q_OBJECT
    enum TYPE {SOURCE, TRANSLATE, EXTRA};
public:
    explicit XYTranslateModel(QObject *parent = 0);
    ~XYTranslateModel();
    void addData(const QList<XYTranslateItem *> &list);
    void setData(const QList<XYTranslateItem *> &list);
    void clear();

    bool haveData(int index) const;
    int  counts();
    QString data(int index, int role = SOURCE) const;

private:
    QList<XYTranslateItem *> mlistFindTranslates;

};

#endif // XYLISTMODEL_H
