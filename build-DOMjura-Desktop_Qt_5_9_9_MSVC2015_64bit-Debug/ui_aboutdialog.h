/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

namespace DJ {
namespace View {

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;

    void setupUi(QDialog *DJ__View__AboutDialog)
    {
        if (DJ__View__AboutDialog->objectName().isEmpty())
            DJ__View__AboutDialog->setObjectName(QStringLiteral("DJ__View__AboutDialog"));
        DJ__View__AboutDialog->resize(720, 338);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DJ__View__AboutDialog->sizePolicy().hasHeightForWidth());
        DJ__View__AboutDialog->setSizePolicy(sizePolicy);
        DJ__View__AboutDialog->setMinimumSize(QSize(720, 338));
        DJ__View__AboutDialog->setMaximumSize(QSize(720, 338));
        gridLayout = new QGridLayout(DJ__View__AboutDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(DJ__View__AboutDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(256, 256));
        label_6->setMaximumSize(QSize(256, 256));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/image-256.png")));

        gridLayout->addWidget(label_6, 0, 0, 8, 1);

        label = new QLabel(DJ__View__AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::RichText);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(DJ__View__AboutDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        label_3 = new QLabel(DJ__View__AboutDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_4 = new QLabel(DJ__View__AboutDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(DJ__View__AboutDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setTextFormat(Qt::RichText);
        label_5->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonClose = new QPushButton(DJ__View__AboutDialog);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        horizontalLayout->addWidget(buttonClose);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 1);


        retranslateUi(DJ__View__AboutDialog);
        QObject::connect(buttonClose, SIGNAL(clicked()), DJ__View__AboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(DJ__View__AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *DJ__View__AboutDialog)
    {
        DJ__View__AboutDialog->setWindowTitle(QApplication::translate("DJ::View::AboutDialog", "About DOMjura", Q_NULLPTR));
        label_6->setText(QString());
        label->setText(QApplication::translate("DJ::View::AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:26pt; font-weight:600;\">DOMjura</span><span style=\" font-family:'Lucida Grande';\"> v2.0</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("DJ::View::AboutDialog", "An application to view statistics and results of a DOMjudge contest or view a live scoreboard", Q_NULLPTR));
        label_3->setText(QApplication::translate("DJ::View::AboutDialog", "Created by:", Q_NULLPTR));
        label_4->setText(QApplication::translate("DJ::View::AboutDialog", "Nicky Gerritsen", Q_NULLPTR));
        label_5->setText(QApplication::translate("DJ::View::AboutDialog", "<html>\n"
" <head>\n"
"  <style type=\"text/css\">\n"
"a:link { color: #013370; text-decoration: underline; }\n"
"a:visited { color: #013370; text-decoration: underline; }\n"
"a:hover { color: #013370; text-decoration: none; }\n"
"a:active { color: #013370; text-decoration: none; }\n"
"p, li { white-space: pre-wrap; }\n"
"  </style>\n"
" </head>\n"
" <body>\n"
"  GitHub: <a href=\"https://github.com/DOMjudge/DOMjura\">github.com/DOMjudge/DOMjura</a>\n"
" </body>\n"
"</html>", Q_NULLPTR));
        buttonClose->setText(QApplication::translate("DJ::View::AboutDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

} // namespace View
} // namespace DJ

namespace DJ {
namespace View {
namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui
} // namespace View
} // namespace DJ

#endif // UI_ABOUTDIALOG_H
