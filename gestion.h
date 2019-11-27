#ifndef GESTION_H
#define GESTION_H
#include "convention.h"
#include <QDialog>

namespace Ui {
class gestion;
}

class gestion : public QDialog
{
    Q_OBJECT

public:
    explicit gestion(QWidget *parent = nullptr);
    ~gestion();
    void afficherC();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gestion *ui;
    Convention tmpConvention;

};

#endif // GESTION_H
