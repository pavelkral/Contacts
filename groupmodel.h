//
// C++ Interface: groupmodel
//
// Description: 
//
//
// Author: coyote,,,, <coyotex@coyote-kenel>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef GROUPMODEL_H
#define GROUPMODEL_H

/**
	@author coyote,,,, <coyotex@coyote-kenel>
*/
#include <QSqlQueryModel>
 #include <QFileIconProvider>
 #include <QVector>

 class GroupModel : public QSqlQueryModel
 {
     Q_OBJECT

 public:
     
   GroupModel( QObject *parent = 0);
    QVariant data(const QModelIndex &index, int role) const;
     //QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    virtual ~GroupModel();
   
 };

 #endif