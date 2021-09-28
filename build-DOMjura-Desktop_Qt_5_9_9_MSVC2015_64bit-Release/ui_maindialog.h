/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

namespace DJ {
namespace View {

class Ui_MainDialog
{
public:
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonConnect;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLineEdit *lineEditPassword;
    QLabel *labelUsername;
    QLabel *label_2;
    QLabel *labelPassword;
    QLineEdit *lineEditUsername;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditURL;
    QLabel *labelDOMjudgePath;
    QComboBox *comboProtocol;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *contestsComboBox;
    QPushButton *loadContestsButton;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxContest;
    QGridLayout *gridLayout_2;
    QLabel *labelContestName;
    QLabel *label_5;
    QLabel *labelContestStart;
    QLabel *labelContestEnd;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *labelContestPenalty;
    QLabel *label;
    QLabel *labelContestFreeze;
    QLabel *label_3;
    QGroupBox *groupBoxGroups;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QGridLayout *gridLayoutGroups;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonQuit;
    QPushButton *buttonSettings;
    QPushButton *buttonAbout;
    QGroupBox *groupBoxMode;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QRadioButton *radioModeLive;
    QLabel *label_9;
    QCheckBox *checkDuringFreeze;
    QRadioButton *radioModeResults;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonStart;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DJ__View__MainDialog)
    {
        if (DJ__View__MainDialog->objectName().isEmpty())
            DJ__View__MainDialog->setObjectName(QStringLiteral("DJ__View__MainDialog"));
        DJ__View__MainDialog->resize(880, 825);
        DJ__View__MainDialog->setMinimumSize(QSize(880, 440));
        gridLayout_8 = new QGridLayout(DJ__View__MainDialog);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox = new QGroupBox(DJ__View__MainDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 293));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        buttonConnect = new QPushButton(groupBox);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));
        buttonConnect->setEnabled(false);

        horizontalLayout_4->addWidget(buttonConnect);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1, Qt::AlignRight);

        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPassword, 2, 2, 1, 1);

        labelUsername = new QLabel(groupBox);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));
        labelUsername->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelUsername, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 29));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 4, 2, 1, 1);

        labelPassword = new QLabel(groupBox);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword, 2, 0, 1, 1);

        lineEditUsername = new QLineEdit(groupBox);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));

        gridLayout->addWidget(lineEditUsername, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEditURL = new QLineEdit(groupBox);
        lineEditURL->setObjectName(QStringLiteral("lineEditURL"));

        horizontalLayout_2->addWidget(lineEditURL);

        labelDOMjudgePath = new QLabel(groupBox);
        labelDOMjudgePath->setObjectName(QStringLiteral("labelDOMjudgePath"));
        labelDOMjudgePath->setEnabled(true);

        horizontalLayout_2->addWidget(labelDOMjudgePath);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        comboProtocol = new QComboBox(groupBox);
        comboProtocol->setObjectName(QStringLiteral("comboProtocol"));

        gridLayout->addWidget(comboProtocol, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        contestsComboBox = new QComboBox(groupBox);
        contestsComboBox->setObjectName(QStringLiteral("contestsComboBox"));
        contestsComboBox->setEnabled(false);

        horizontalLayout_5->addWidget(contestsComboBox);

        loadContestsButton = new QPushButton(groupBox);
        loadContestsButton->setObjectName(QStringLiteral("loadContestsButton"));
        loadContestsButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(loadContestsButton);


        gridLayout->addLayout(horizontalLayout_5, 3, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_8->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(6);
        groupBoxContest = new QGroupBox(DJ__View__MainDialog);
        groupBoxContest->setObjectName(QStringLiteral("groupBoxContest"));
        groupBoxContest->setEnabled(false);
        gridLayout_2 = new QGridLayout(groupBoxContest);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelContestName = new QLabel(groupBoxContest);
        labelContestName->setObjectName(QStringLiteral("labelContestName"));

        gridLayout_2->addWidget(labelContestName, 0, 1, 1, 1);

        label_5 = new QLabel(groupBoxContest);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        labelContestStart = new QLabel(groupBoxContest);
        labelContestStart->setObjectName(QStringLiteral("labelContestStart"));

        gridLayout_2->addWidget(labelContestStart, 1, 1, 1, 1);

        labelContestEnd = new QLabel(groupBoxContest);
        labelContestEnd->setObjectName(QStringLiteral("labelContestEnd"));

        gridLayout_2->addWidget(labelContestEnd, 3, 1, 1, 1);

        label_7 = new QLabel(groupBoxContest);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        label_4 = new QLabel(groupBoxContest);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        labelContestPenalty = new QLabel(groupBoxContest);
        labelContestPenalty->setObjectName(QStringLiteral("labelContestPenalty"));

        gridLayout_2->addWidget(labelContestPenalty, 4, 1, 1, 1);

        label = new QLabel(groupBoxContest);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        labelContestFreeze = new QLabel(groupBoxContest);
        labelContestFreeze->setObjectName(QStringLiteral("labelContestFreeze"));

        gridLayout_2->addWidget(labelContestFreeze, 2, 1, 1, 1);

        label_3 = new QLabel(groupBoxContest);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBoxContest, 0, 0, 1, 1);

        groupBoxGroups = new QGroupBox(DJ__View__MainDialog);
        groupBoxGroups->setObjectName(QStringLiteral("groupBoxGroups"));
        groupBoxGroups->setEnabled(false);
        gridLayout_5 = new QGridLayout(groupBoxGroups);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_8 = new QLabel(groupBoxGroups);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        gridLayoutGroups = new QGridLayout();
        gridLayoutGroups->setObjectName(QStringLiteral("gridLayoutGroups"));

        gridLayout_5->addLayout(gridLayoutGroups, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 2, 0, 1, 1);


        gridLayout_4->addWidget(groupBoxGroups, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 1);

        gridLayout_8->addLayout(gridLayout_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonQuit = new QPushButton(DJ__View__MainDialog);
        buttonQuit->setObjectName(QStringLiteral("buttonQuit"));

        horizontalLayout->addWidget(buttonQuit);

        buttonSettings = new QPushButton(DJ__View__MainDialog);
        buttonSettings->setObjectName(QStringLiteral("buttonSettings"));

        horizontalLayout->addWidget(buttonSettings);

        buttonAbout = new QPushButton(DJ__View__MainDialog);
        buttonAbout->setObjectName(QStringLiteral("buttonAbout"));

        horizontalLayout->addWidget(buttonAbout);


        gridLayout_8->addLayout(horizontalLayout, 4, 0, 1, 1);

        groupBoxMode = new QGroupBox(DJ__View__MainDialog);
        groupBoxMode->setObjectName(QStringLiteral("groupBoxMode"));
        groupBoxMode->setEnabled(false);
        gridLayout_7 = new QGridLayout(groupBoxMode);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        radioModeLive = new QRadioButton(groupBoxMode);
        radioModeLive->setObjectName(QStringLiteral("radioModeLive"));
        radioModeLive->setEnabled(false);
        radioModeLive->setChecked(false);

        gridLayout_6->addWidget(radioModeLive, 0, 0, 1, 1);

        label_9 = new QLabel(groupBoxMode);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setEnabled(false);

        gridLayout_6->addWidget(label_9, 0, 1, 1, 1);

        checkDuringFreeze = new QCheckBox(groupBoxMode);
        checkDuringFreeze->setObjectName(QStringLiteral("checkDuringFreeze"));
        checkDuringFreeze->setEnabled(false);

        gridLayout_6->addWidget(checkDuringFreeze, 1, 1, 1, 1);

        radioModeResults = new QRadioButton(groupBoxMode);
        radioModeResults->setObjectName(QStringLiteral("radioModeResults"));
        radioModeResults->setChecked(true);

        gridLayout_6->addWidget(radioModeResults, 2, 0, 1, 1);

        label_10 = new QLabel(groupBoxMode);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(false);
        label_10->setWordWrap(true);

        gridLayout_6->addWidget(label_10, 2, 1, 1, 1);

        gridLayout_6->setColumnStretch(1, 1);

        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        buttonStart = new QPushButton(groupBoxMode);
        buttonStart->setObjectName(QStringLiteral("buttonStart"));

        horizontalLayout_3->addWidget(buttonStart);


        gridLayout_7->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBoxMode, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 3, 0, 1, 1);

        QWidget::setTabOrder(comboProtocol, lineEditURL);
        QWidget::setTabOrder(lineEditURL, lineEditUsername);
        QWidget::setTabOrder(lineEditUsername, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, loadContestsButton);
        QWidget::setTabOrder(loadContestsButton, contestsComboBox);
        QWidget::setTabOrder(contestsComboBox, buttonConnect);
        QWidget::setTabOrder(buttonConnect, radioModeLive);
        QWidget::setTabOrder(radioModeLive, checkDuringFreeze);
        QWidget::setTabOrder(checkDuringFreeze, radioModeResults);
        QWidget::setTabOrder(radioModeResults, buttonStart);
        QWidget::setTabOrder(buttonStart, buttonSettings);
        QWidget::setTabOrder(buttonSettings, buttonQuit);
        QWidget::setTabOrder(buttonQuit, buttonAbout);

        retranslateUi(DJ__View__MainDialog);
        QObject::connect(buttonQuit, SIGNAL(clicked()), DJ__View__MainDialog, SLOT(close()));
        QObject::connect(radioModeLive, SIGNAL(clicked(bool)), checkDuringFreeze, SLOT(setEnabled(bool)));
        QObject::connect(radioModeResults, SIGNAL(clicked(bool)), checkDuringFreeze, SLOT(setDisabled(bool)));
        QObject::connect(radioModeLive, SIGNAL(clicked(bool)), label_9, SLOT(setEnabled(bool)));
        QObject::connect(radioModeLive, SIGNAL(clicked(bool)), label_10, SLOT(setDisabled(bool)));
        QObject::connect(radioModeResults, SIGNAL(clicked(bool)), label_9, SLOT(setDisabled(bool)));
        QObject::connect(radioModeResults, SIGNAL(clicked(bool)), label_10, SLOT(setEnabled(bool)));
        QObject::connect(lineEditURL, SIGNAL(returnPressed()), buttonConnect, SLOT(click()));
        QObject::connect(lineEditUsername, SIGNAL(returnPressed()), buttonConnect, SLOT(click()));
        QObject::connect(lineEditPassword, SIGNAL(returnPressed()), buttonConnect, SLOT(click()));

        QMetaObject::connectSlotsByName(DJ__View__MainDialog);
    } // setupUi

    void retranslateUi(QWidget *DJ__View__MainDialog)
    {
        DJ__View__MainDialog->setWindowTitle(QApplication::translate("DJ::View::MainDialog", "DOMjura", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DJ::View::MainDialog", "1: Source", Q_NULLPTR));
        buttonConnect->setText(QApplication::translate("DJ::View::MainDialog", "Connect", Q_NULLPTR));
        label_11->setText(QApplication::translate("DJ::View::MainDialog", "Contests", Q_NULLPTR));
        labelUsername->setText(QApplication::translate("DJ::View::MainDialog", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("DJ::View::MainDialog", "This machine needs the \"jury\" or \"admin\" role on the DOMjudge server. If IP address authentication is used, you can also set up DOMjudge to allow this machine without username and password. In that case, the username and password fields can be left blank.", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("DJ::View::MainDialog", "Password", Q_NULLPTR));
        labelDOMjudgePath->setText(QApplication::translate("DJ::View::MainDialog", "/api", Q_NULLPTR));
        comboProtocol->clear();
        comboProtocol->insertItems(0, QStringList()
         << QApplication::translate("DJ::View::MainDialog", "http://", Q_NULLPTR)
         << QApplication::translate("DJ::View::MainDialog", "https://", Q_NULLPTR)
        );
        loadContestsButton->setText(QApplication::translate("DJ::View::MainDialog", "Load", Q_NULLPTR));
        groupBoxContest->setTitle(QApplication::translate("DJ::View::MainDialog", "2: Contest information", Q_NULLPTR));
        labelContestName->setText(QString());
        label_5->setText(QApplication::translate("DJ::View::MainDialog", "End", Q_NULLPTR));
        labelContestStart->setText(QString());
        labelContestEnd->setText(QString());
        label_7->setText(QApplication::translate("DJ::View::MainDialog", "Penalty time", Q_NULLPTR));
        label_4->setText(QApplication::translate("DJ::View::MainDialog", "Freeze", Q_NULLPTR));
        labelContestPenalty->setText(QString());
        label->setText(QApplication::translate("DJ::View::MainDialog", "Name", Q_NULLPTR));
        labelContestFreeze->setText(QString());
        label_3->setText(QApplication::translate("DJ::View::MainDialog", "Start", Q_NULLPTR));
        groupBoxGroups->setTitle(QApplication::translate("DJ::View::MainDialog", "3: Groups to display", Q_NULLPTR));
        label_8->setText(QApplication::translate("DJ::View::MainDialog", "Select the groups to display", Q_NULLPTR));
        buttonQuit->setText(QApplication::translate("DJ::View::MainDialog", "Quit", Q_NULLPTR));
        buttonSettings->setText(QApplication::translate("DJ::View::MainDialog", "Settings", Q_NULLPTR));
        buttonAbout->setText(QApplication::translate("DJ::View::MainDialog", "About", Q_NULLPTR));
        groupBoxMode->setTitle(QApplication::translate("DJ::View::MainDialog", "4: Mode", Q_NULLPTR));
        radioModeLive->setText(QApplication::translate("DJ::View::MainDialog", "Live mode", Q_NULLPTR));
        label_9->setText(QApplication::translate("DJ::View::MainDialog", "Live mode can be used during the contest. It will display a live scoreboard", Q_NULLPTR));
        checkDuringFreeze->setText(QApplication::translate("DJ::View::MainDialog", "Show submissions during freeze", Q_NULLPTR));
        radioModeResults->setText(QApplication::translate("DJ::View::MainDialog", "Results mode", Q_NULLPTR));
        label_10->setText(QApplication::translate("DJ::View::MainDialog", "<html><head/><body><p>Results mode can be used to show the results at the end of the contest. It will resolve all submissions during the freeze</p></body></html>", Q_NULLPTR));
        buttonStart->setText(QApplication::translate("DJ::View::MainDialog", "Start", Q_NULLPTR));
    } // retranslateUi

};

} // namespace View
} // namespace DJ

namespace DJ {
namespace View {
namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui
} // namespace View
} // namespace DJ

#endif // UI_MAINDIALOG_H
