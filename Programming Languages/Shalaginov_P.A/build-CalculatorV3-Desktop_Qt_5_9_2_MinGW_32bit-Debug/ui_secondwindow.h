/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QLabel *result_show;
    QPushButton *pushButton_7;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_3;
    QFrame *frame;
    QPushButton *pushButton_ravno;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_delenie;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButton_4;
    QPushButton *pushButton_procent;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(238, 390);
        result_show = new QLabel(SecondWindow);
        result_show->setObjectName(QStringLiteral("result_show"));
        result_show->setGeometry(QRect(0, 0, 241, 91));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI Light"));
        font.setPointSize(20);
        font.setStrikeOut(false);
        font.setKerning(true);
        result_show->setFont(font);
        result_show->setMouseTracking(false);
        result_show->setLayoutDirection(Qt::RightToLeft);
        result_show->setStyleSheet(QLatin1String("QLabel{\n"
"	background-color: rgb(66, 66, 66);\n"
"	border-right: 2px;\n"
"\n"
"	color:white;\n"
"\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	\n"
"}\n"
"\n"
""));
        result_show->setMargin(8);
        pushButton_7 = new QPushButton(SecondWindow);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 150, 60, 60));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(20);
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_plus_minus = new QPushButton(SecondWindow);
        pushButton_plus_minus->setObjectName(QStringLiteral("pushButton_plus_minus"));
        pushButton_plus_minus->setGeometry(QRect(60, 90, 61, 61));
        pushButton_plus_minus->setFont(font1);
        pushButton_plus_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_3 = new QPushButton(SecondWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 270, 60, 60));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        frame = new QFrame(SecondWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-1, -1, 241, 391));
        frame->setStyleSheet(QStringLiteral("background-color:rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_ravno = new QPushButton(frame);
        pushButton_ravno->setObjectName(QStringLiteral("pushButton_ravno"));
        pushButton_ravno->setGeometry(QRect(180, 330, 60, 60));
        pushButton_ravno->setFont(font1);
        pushButton_ravno->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color:red;\n"
"	color:Seashell4;\n"
"	border: 1px solid black;\n"
"	border-radius: 30px;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: white;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_dot = new QPushButton(frame);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(120, 330, 60, 60));
        pushButton_dot->setFont(font1);
        pushButton_dot->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_mult = new QPushButton(frame);
        pushButton_mult->setObjectName(QStringLiteral("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(180, 150, 60, 60));
        pushButton_mult->setFont(font1);
        pushButton_mult->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color:DimGrey;\n"
"	color:Seashell4;\n"
"	border: 1px solid black;\n"
"	border-radius: 30px;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: white;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_minus = new QPushButton(frame);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 210, 60, 60));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color:DimGrey;\n"
"	color:Seashell4;\n"
"	border: 1px solid black;\n"
"	border-radius: 30px;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: white;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_plus = new QPushButton(frame);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(180, 270, 60, 60));
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color:DimGrey;\n"
"	color:Seashell4;\n"
"	border: 1px solid black;\n"
"	border-radius: 30px;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: white;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_delenie = new QPushButton(frame);
        pushButton_delenie->setObjectName(QStringLiteral("pushButton_delenie"));
        pushButton_delenie->setGeometry(QRect(180, 90, 60, 60));
        pushButton_delenie->setFont(font1);
        pushButton_delenie->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color:DimGrey;\n"
"	color:Seashell4;\n"
"	border: 1px solid black;\n"
"	border-radius: 30px;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: white;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_9 = new QPushButton(SecondWindow);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 150, 60, 60));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_2 = new QPushButton(SecondWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 270, 60, 60));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_5 = new QPushButton(SecondWindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 210, 60, 60));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 330, 60, 60));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_6 = new QPushButton(SecondWindow);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 210, 60, 60));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_1 = new QPushButton(SecondWindow);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 270, 60, 60));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_8 = new QPushButton(SecondWindow);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 150, 60, 60));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_0 = new QPushButton(SecondWindow);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(60, 330, 60, 60));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_4 = new QPushButton(SecondWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 210, 60, 60));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_procent = new QPushButton(SecondWindow);
        pushButton_procent->setObjectName(QStringLiteral("pushButton_procent"));
        pushButton_procent->setGeometry(QRect(120, 90, 61, 61));
        pushButton_procent->setFont(font1);
        pushButton_procent->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        pushButton_clear = new QPushButton(SecondWindow);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 90, 61, 61));
        pushButton_clear->setFont(font1);
        pushButton_clear->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"	color:white;\n"
"	border: 1px solid black;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: DimGrey;\n"
"	border-radius: 30px;\n"
"}\n"
"\n"
""));
        frame->raise();
        result_show->raise();
        pushButton_7->raise();
        pushButton_plus_minus->raise();
        pushButton_3->raise();
        pushButton_9->raise();
        pushButton_2->raise();
        pushButton_5->raise();
        pushButton->raise();
        pushButton_6->raise();
        pushButton_1->raise();
        pushButton_8->raise();
        pushButton_0->raise();
        pushButton_4->raise();
        pushButton_procent->raise();
        pushButton_clear->raise();

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "Calculator", Q_NULLPTR));
        result_show->setText(QApplication::translate("SecondWindow", "0", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("SecondWindow", "7", Q_NULLPTR));
        pushButton_plus_minus->setText(QApplication::translate("SecondWindow", "+/-", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SecondWindow", "3", Q_NULLPTR));
        pushButton_ravno->setText(QApplication::translate("SecondWindow", "=", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("SecondWindow", ".", Q_NULLPTR));
        pushButton_mult->setText(QApplication::translate("SecondWindow", "X", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("SecondWindow", "-", Q_NULLPTR));
        pushButton_plus->setText(QApplication::translate("SecondWindow", "+", Q_NULLPTR));
        pushButton_delenie->setText(QApplication::translate("SecondWindow", "/", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("SecondWindow", "9", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SecondWindow", "2", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("SecondWindow", "5", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SecondWindow", "?", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("SecondWindow", "6", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("SecondWindow", "1", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("SecondWindow", "8", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("SecondWindow", "0", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SecondWindow", "4", Q_NULLPTR));
        pushButton_procent->setText(QApplication::translate("SecondWindow", "%", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("SecondWindow", "AC", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
