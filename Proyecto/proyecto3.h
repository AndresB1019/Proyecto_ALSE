#ifndef PROYECTO3_H
#define PROYECTO3_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Proyecto3; }
QT_END_NAMESPACE

class Proyecto3 : public QMainWindow
{
    Q_OBJECT

public:
    Proyecto3(QWidget *parent = nullptr);
    ~Proyecto3();

private slots:
    void on_Btnenviar_clicked();

    void on_Btnactu_clicked();

    void on_pushButton_clicked();

    void on_Btncarga_clicked();

private:
    Ui::Proyecto3 *ui;
};
#endif // PROYECTO3_H
