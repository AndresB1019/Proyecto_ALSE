/********************************************************************************
** Form generated from reading UI file 'proyecto3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROYECTO3_H
#define UI_PROYECTO3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proyecto3
{
public:
    QWidget *centralwidget;
    QPushButton *Btnactu;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *LEcarne;
    QPushButton *Btnenviar;
    QProgressBar *PBvel;
    QProgressBar *PBfrec;
    QProgressBar *PBtemp;
    QProgressBar *PBvol;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *Lerror;
    QLabel *LTt;
    QLabel *LTvolt;
    QLabel *LTv;
    QLabel *LTf;
    QLabel *LTv_2;
    QLabel *LTt_2;
    QLabel *LTf_2;
    QLabel *LTvolt_2;
    QLabel *Lvel;
    QLabel *Ltemp;
    QLabel *Lfrec;
    QLabel *Lvolt;
    QLabel *Ltiemp;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *Btncarga;
    QTableWidget *TWdatos;
    QMenuBar *menubar;
    QMenu *menuProyecto_ALSE;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Proyecto3)
    {
        if (Proyecto3->objectName().isEmpty())
            Proyecto3->setObjectName(QString::fromUtf8("Proyecto3"));
        Proyecto3->resize(684, 524);
        centralwidget = new QWidget(Proyecto3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Btnactu = new QPushButton(centralwidget);
        Btnactu->setObjectName(QString::fromUtf8("Btnactu"));
        Btnactu->setEnabled(true);
        Btnactu->setGeometry(QRect(30, 30, 91, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 0, 361, 21));
        label->setTextFormat(Qt::RichText);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(480, 40, 65, 15));
        LEcarne = new QLineEdit(centralwidget);
        LEcarne->setObjectName(QString::fromUtf8("LEcarne"));
        LEcarne->setGeometry(QRect(550, 40, 113, 23));
        Btnenviar = new QPushButton(centralwidget);
        Btnenviar->setObjectName(QString::fromUtf8("Btnenviar"));
        Btnenviar->setGeometry(QRect(560, 70, 91, 21));
        PBvel = new QProgressBar(centralwidget);
        PBvel->setObjectName(QString::fromUtf8("PBvel"));
        PBvel->setEnabled(true);
        PBvel->setGeometry(QRect(250, 120, 118, 23));
        QFont font;
        font.setUnderline(false);
        font.setStrikeOut(false);
        PBvel->setFont(font);
        PBvel->setMaximum(110);
        PBvel->setValue(24);
        PBfrec = new QProgressBar(centralwidget);
        PBfrec->setObjectName(QString::fromUtf8("PBfrec"));
        PBfrec->setEnabled(true);
        PBfrec->setGeometry(QRect(250, 150, 118, 23));
        PBfrec->setMaximum(110);
        PBfrec->setValue(24);
        PBtemp = new QProgressBar(centralwidget);
        PBtemp->setObjectName(QString::fromUtf8("PBtemp"));
        PBtemp->setEnabled(true);
        PBtemp->setGeometry(QRect(250, 210, 118, 23));
        PBtemp->setMaximum(110);
        PBtemp->setValue(24);
        PBvol = new QProgressBar(centralwidget);
        PBvol->setObjectName(QString::fromUtf8("PBvol"));
        PBvol->setEnabled(true);
        PBvol->setGeometry(QRect(250, 180, 118, 23));
        PBvol->setMaximum(110);
        PBvol->setValue(24);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(30, 120, 111, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(30, 150, 111, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(30, 180, 101, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(30, 210, 121, 16));
        Lerror = new QLabel(centralwidget);
        Lerror->setObjectName(QString::fromUtf8("Lerror"));
        Lerror->setEnabled(false);
        Lerror->setGeometry(QRect(140, 50, 321, 21));
        Lerror->setFont(font1);
        LTt = new QLabel(centralwidget);
        LTt->setObjectName(QString::fromUtf8("LTt"));
        LTt->setEnabled(true);
        LTt->setGeometry(QRect(450, 210, 16, 16));
        LTvolt = new QLabel(centralwidget);
        LTvolt->setObjectName(QString::fromUtf8("LTvolt"));
        LTvolt->setEnabled(true);
        LTvolt->setGeometry(QRect(450, 180, 16, 16));
        LTv = new QLabel(centralwidget);
        LTv->setObjectName(QString::fromUtf8("LTv"));
        LTv->setEnabled(true);
        LTv->setGeometry(QRect(450, 120, 21, 16));
        LTv->setFont(font1);
        LTf = new QLabel(centralwidget);
        LTf->setObjectName(QString::fromUtf8("LTf"));
        LTf->setEnabled(true);
        LTf->setGeometry(QRect(450, 150, 16, 16));
        LTv_2 = new QLabel(centralwidget);
        LTv_2->setObjectName(QString::fromUtf8("LTv_2"));
        LTv_2->setEnabled(true);
        LTv_2->setGeometry(QRect(430, 120, 16, 16));
        LTv_2->setFont(font1);
        LTt_2 = new QLabel(centralwidget);
        LTt_2->setObjectName(QString::fromUtf8("LTt_2"));
        LTt_2->setEnabled(true);
        LTt_2->setGeometry(QRect(430, 210, 16, 16));
        LTf_2 = new QLabel(centralwidget);
        LTf_2->setObjectName(QString::fromUtf8("LTf_2"));
        LTf_2->setEnabled(true);
        LTf_2->setGeometry(QRect(430, 150, 16, 16));
        LTvolt_2 = new QLabel(centralwidget);
        LTvolt_2->setObjectName(QString::fromUtf8("LTvolt_2"));
        LTvolt_2->setEnabled(true);
        LTvolt_2->setGeometry(QRect(430, 180, 16, 16));
        Lvel = new QLabel(centralwidget);
        Lvel->setObjectName(QString::fromUtf8("Lvel"));
        Lvel->setEnabled(true);
        Lvel->setGeometry(QRect(180, 120, 51, 16));
        Lvel->setFont(font1);
        Ltemp = new QLabel(centralwidget);
        Ltemp->setObjectName(QString::fromUtf8("Ltemp"));
        Ltemp->setEnabled(true);
        Ltemp->setGeometry(QRect(180, 210, 51, 16));
        Lfrec = new QLabel(centralwidget);
        Lfrec->setObjectName(QString::fromUtf8("Lfrec"));
        Lfrec->setEnabled(true);
        Lfrec->setGeometry(QRect(180, 150, 51, 16));
        Lvolt = new QLabel(centralwidget);
        Lvolt->setObjectName(QString::fromUtf8("Lvolt"));
        Lvolt->setEnabled(true);
        Lvolt->setGeometry(QRect(180, 180, 51, 16));
        Ltiemp = new QLabel(centralwidget);
        Ltiemp->setObjectName(QString::fromUtf8("Ltiemp"));
        Ltiemp->setEnabled(true);
        Ltiemp->setGeometry(QRect(450, 240, 211, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(390, 120, 65, 15));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(390, 150, 65, 15));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(390, 180, 65, 15));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 210, 65, 15));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(360, 89, 131, 31));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(280, 120, 65, 15));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(280, 150, 65, 15));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(280, 180, 65, 15));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(280, 210, 65, 15));
        Btncarga = new QPushButton(centralwidget);
        Btncarga->setObjectName(QString::fromUtf8("Btncarga"));
        Btncarga->setEnabled(true);
        Btncarga->setGeometry(QRect(1020, 140, 91, 31));
        TWdatos = new QTableWidget(centralwidget);
        TWdatos->setObjectName(QString::fromUtf8("TWdatos"));
        TWdatos->setGeometry(QRect(30, 280, 621, 192));
        Proyecto3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Proyecto3);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 684, 20));
        menuProyecto_ALSE = new QMenu(menubar);
        menuProyecto_ALSE->setObjectName(QString::fromUtf8("menuProyecto_ALSE"));
        Proyecto3->setMenuBar(menubar);
        statusbar = new QStatusBar(Proyecto3);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Proyecto3->setStatusBar(statusbar);

        menubar->addAction(menuProyecto_ALSE->menuAction());

        retranslateUi(Proyecto3);

        QMetaObject::connectSlotsByName(Proyecto3);
    } // setupUi

    void retranslateUi(QMainWindow *Proyecto3)
    {
        Proyecto3->setWindowTitle(QCoreApplication::translate("Proyecto3", "Proyecto3", nullptr));
        Btnactu->setText(QCoreApplication::translate("Proyecto3", "Actualizar", nullptr));
        label->setText(QCoreApplication::translate("Proyecto3", "SISTEMA DE MONITOREO MOTORES ALSE TERCER TERCIO", nullptr));
        label_2->setText(QCoreApplication::translate("Proyecto3", "No. carn\303\251", nullptr));
        Btnenviar->setText(QCoreApplication::translate("Proyecto3", "Enviar", nullptr));
        label_3->setText(QCoreApplication::translate("Proyecto3", "Velocidad [RPM]", nullptr));
        label_4->setText(QCoreApplication::translate("Proyecto3", "Frecuencia [Hz]", nullptr));
        label_5->setText(QCoreApplication::translate("Proyecto3", "Voltaje [V]", nullptr));
        label_7->setText(QCoreApplication::translate("Proyecto3", "Temperatura [\302\260C]", nullptr));
        Lerror->setText(QString());
        LTt->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        LTvolt->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        LTv->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        LTf->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        LTv_2->setText(QCoreApplication::translate("Proyecto3", "\302\261", nullptr));
        LTt_2->setText(QCoreApplication::translate("Proyecto3", "\302\261", nullptr));
        LTf_2->setText(QCoreApplication::translate("Proyecto3", "\302\261", nullptr));
        LTvolt_2->setText(QCoreApplication::translate("Proyecto3", "\302\261", nullptr));
        Lvel->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        Ltemp->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        Lfrec->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        Lvolt->setText(QCoreApplication::translate("Proyecto3", "0", nullptr));
        Ltiemp->setText(QString());
        label_6->setText(QCoreApplication::translate("Proyecto3", "1800", nullptr));
        label_8->setText(QCoreApplication::translate("Proyecto3", "60", nullptr));
        label_9->setText(QCoreApplication::translate("Proyecto3", "120", nullptr));
        label_11->setText(QCoreApplication::translate("Proyecto3", "40", nullptr));
        label_10->setText(QCoreApplication::translate("Proyecto3", "Valores permitidos", nullptr));
        label_12->setText(QCoreApplication::translate("Proyecto3", "\302\241ALERTA!", nullptr));
        label_13->setText(QCoreApplication::translate("Proyecto3", "\302\241ALERTA!", nullptr));
        label_14->setText(QCoreApplication::translate("Proyecto3", "\302\241ALERTA!", nullptr));
        label_15->setText(QCoreApplication::translate("Proyecto3", "\302\241ALERTA!", nullptr));
        Btncarga->setText(QCoreApplication::translate("Proyecto3", "Actualizar", nullptr));
        menuProyecto_ALSE->setTitle(QCoreApplication::translate("Proyecto3", "Proyecto ALSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Proyecto3: public Ui_Proyecto3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO3_H
