/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *action_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget_left;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QLabel *label_carback;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *forward;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *r_left;
    QPushButton *stop;
    QPushButton *r_right;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *back;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_14;
    QSlider *horizontalSlider_raw;
    QLabel *label_raw;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_9;
    QSlider *horizontalSlider_linear;
    QLabel *label_linear;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_5;
    QWidget *JoyStick_widget;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QWidget *page;
    QVBoxLayout *verticalLayout_15;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_time;
    QLabel *label_19;
    QLabel *label_18;
    QPushButton *pushButton_status;
    QSpacerItem *horizontalSpacer;
    QLabel *label_10;
    QLabel *label_6;
    QProgressBar *progressBar;
    QLabel *label_11;
    QLabel *label_power;
    QPushButton *min_btn;
    QPushButton *max_btn;
    QPushButton *close_btn;
    QStackedWidget *stackedWidget_main;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *set_pos_btn;
    QPushButton *set_goal_btn;
    QPushButton *return_btn;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_build_map;
    QGraphicsView *mapViz;
    QWidget *widget_rviz;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_rviz;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QLabel *label_pos_map;
    QLabel *label_5;
    QLabel *label_pos_scene;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_video2;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_video3;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_29;
    QPushButton *refresh_topic_btn;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *topic_listWidget;
    QListView *view_logging;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_24;
    QHBoxLayout *horizontalLayout_menu;
    QPushButton *btn_status;
    QPushButton *btn_control;
    QPushButton *btn_map;
    QPushButton *btn_other;
    QPushButton *settings_btn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1266, 656);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/data/images/robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"padding:0;\n"
""));
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindow);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("margin:0"));
        verticalLayout_10 = new QVBoxLayout(centralwidget);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        stackedWidget_left = new QStackedWidget(centralwidget);
        stackedWidget_left->setObjectName(QString::fromUtf8("stackedWidget_left"));
        stackedWidget_left->setMinimumSize(QSize(400, 0));
        stackedWidget_left->setMaximumSize(QSize(600, 16777215));
        stackedWidget_left->setStyleSheet(QString::fromUtf8("QStackedWidget{\n"
"border-right: 10px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"background-color: transparent;\n"
"}\n"
""));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_8 = new QVBoxLayout(page_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(page_6);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(3);

        verticalLayout_2->addWidget(frame_2);

        label_carback = new QLabel(page_6);
        label_carback->setObjectName(QString::fromUtf8("label_carback"));
        label_carback->setMinimumSize(QSize(300, 400));
        label_carback->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_carback);


        verticalLayout_8->addLayout(verticalLayout_2);

        stackedWidget_left->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_7 = new QVBoxLayout(page_7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        forward = new QPushButton(page_7);
        forward->setObjectName(QString::fromUtf8("forward"));
        forward->setMinimumSize(QSize(64, 64));
        forward->setMaximumSize(QSize(64, 64));
        forward->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/data/images/up.png);}\n"
"QPushButton{border:none;}\n"
"QPushButton:pressed{border-image: url(:/image/data/images/up_2.png);}"));

        horizontalLayout_2->addWidget(forward);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        r_left = new QPushButton(page_7);
        r_left->setObjectName(QString::fromUtf8("r_left"));
        r_left->setMinimumSize(QSize(64, 64));
        r_left->setMaximumSize(QSize(64, 64));
        r_left->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/data/images/left.png);}\n"
"QPushButton{border:none;}\n"
"QPushButton:pressed{border-image: url(:/image/data/images/left_2.png);}"));

        horizontalLayout_18->addWidget(r_left);

        stop = new QPushButton(page_7);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setMinimumSize(QSize(64, 64));
        stop->setMaximumSize(QSize(64, 64));
        stop->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/data/images/stop.png);}\n"
"QPushButton{border:none;}\n"
"QPushButton:pressed{border-image: url(:/image/data/images/stop-2.png);}"));

        horizontalLayout_18->addWidget(stop);

        r_right = new QPushButton(page_7);
        r_right->setObjectName(QString::fromUtf8("r_right"));
        r_right->setMinimumSize(QSize(64, 64));
        r_right->setMaximumSize(QSize(64, 64));
        r_right->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/data/images/right.png);}\n"
"QPushButton{border:none;}\n"
"QPushButton:pressed{border-image: url(:/image/data/images/right_2.png);}"));

        horizontalLayout_18->addWidget(r_right);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        back = new QPushButton(page_7);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(64, 64));
        back->setMaximumSize(QSize(64, 64));
        back->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/data/images/down.png);}\n"
"QPushButton{border:none;}\n"
"QPushButton:pressed{border-image: url(:/image/data/images/down_2.png);}"));

        horizontalLayout_19->addWidget(back);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_14 = new QLabel(page_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setEnabled(true);

        horizontalLayout_20->addWidget(label_14);

        horizontalSlider_raw = new QSlider(page_7);
        horizontalSlider_raw->setObjectName(QString::fromUtf8("horizontalSlider_raw"));
        horizontalSlider_raw->setEnabled(true);
        horizontalSlider_raw->setMaximum(100);
        horizontalSlider_raw->setValue(100);
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        horizontalLayout_20->addWidget(horizontalSlider_raw);

        label_raw = new QLabel(page_7);
        label_raw->setObjectName(QString::fromUtf8("label_raw"));
        label_raw->setEnabled(true);

        horizontalLayout_20->addWidget(label_raw);


        verticalLayout_3->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_9 = new QLabel(page_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(true);

        horizontalLayout_21->addWidget(label_9);

        horizontalSlider_linear = new QSlider(page_7);
        horizontalSlider_linear->setObjectName(QString::fromUtf8("horizontalSlider_linear"));
        horizontalSlider_linear->setEnabled(true);
        horizontalSlider_linear->setMaximum(100);
        horizontalSlider_linear->setSingleStep(1);
        horizontalSlider_linear->setValue(50);
        horizontalSlider_linear->setOrientation(Qt::Horizontal);

        horizontalLayout_21->addWidget(horizontalSlider_linear);

        label_linear = new QLabel(page_7);
        label_linear->setObjectName(QString::fromUtf8("label_linear"));
        label_linear->setEnabled(true);

        horizontalLayout_21->addWidget(label_linear);


        verticalLayout_3->addLayout(horizontalLayout_21);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_5);

        JoyStick_widget = new QWidget(page_7);
        JoyStick_widget->setObjectName(QString::fromUtf8("JoyStick_widget"));
        JoyStick_widget->setMinimumSize(QSize(200, 200));
        horizontalLayout_22 = new QHBoxLayout(JoyStick_widget);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));

        horizontalLayout_23->addWidget(JoyStick_widget);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_23);

        verticalSpacer_4 = new QSpacerItem(385, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        pushButton = new QPushButton(page_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        verticalLayout_7->addLayout(verticalLayout_3);

        stackedWidget_left->addWidget(page_7);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_15 = new QVBoxLayout(page);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        treeWidget = new QTreeWidget(page);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout_15->addWidget(treeWidget);

        stackedWidget_left->addWidget(page);

        horizontalLayout_4->addWidget(stackedWidget_left);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 3, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_time = new QLabel(widget_3);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setMinimumSize(QSize(60, 0));
        QFont font;
        font.setPointSize(13);
        label_time->setFont(font);

        horizontalLayout_3->addWidget(label_time);

        label_19 = new QLabel(widget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(32, 32));
        label_19->setMaximumSize(QSize(32, 32));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/image/data/images/robot2.png")));

        horizontalLayout_3->addWidget(label_19);

        label_18 = new QLabel(widget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_18);

        pushButton_status = new QPushButton(widget_3);
        pushButton_status->setObjectName(QString::fromUtf8("pushButton_status"));
        pushButton_status->setMinimumSize(QSize(20, 20));
        pushButton_status->setMaximumSize(QSize(20, 20));
        pushButton_status->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_status->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_status);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_10);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(30, 30));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/image/data/images/power.png")));

        horizontalLayout_3->addWidget(label_6);

        progressBar = new QProgressBar(widget_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(90, 16777215));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar#progressBar\n"
"{\n"
"      border:none;   \n"
"      background:rgb(211, 215, 207);\n"
"      border-radius:5px;\n"
"      text-align:center;   \n"
"      color: rgb(229, 229, 229);  \n"
"}\n"
" \n"
"QProgressBar::chunk \n"
"{\n"
"      background-color:rgb(115, 210, 22);\n"
"      border-radius:4px;\n"
"}\n"
""));
        progressBar->setValue(70);

        horizontalLayout_3->addWidget(progressBar);

        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(32, 32));
        label_11->setMaximumSize(QSize(32, 32));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/image/data/images/power-v.png")));

        horizontalLayout_3->addWidget(label_11);

        label_power = new QLabel(widget_3);
        label_power->setObjectName(QString::fromUtf8("label_power"));
        label_power->setMinimumSize(QSize(50, 32));
        label_power->setMaximumSize(QSize(50, 32));
        label_power->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_power);

        min_btn = new QPushButton(widget_3);
        min_btn->setObjectName(QString::fromUtf8("min_btn"));
        min_btn->setCursor(QCursor(Qt::PointingHandCursor));
        min_btn->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8(":/image/data/images/min.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        min_btn->setIcon(icon1);

        horizontalLayout_3->addWidget(min_btn);

        max_btn = new QPushButton(widget_3);
        max_btn->setObjectName(QString::fromUtf8("max_btn"));
        max_btn->setCursor(QCursor(Qt::PointingHandCursor));
        max_btn->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8(":/image/data/images/max.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        max_btn->setIcon(icon2);

        horizontalLayout_3->addWidget(max_btn);

        close_btn = new QPushButton(widget_3);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setCursor(QCursor(Qt::PointingHandCursor));
        close_btn->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8(":/image/data/images/close.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        close_btn->setIcon(icon3);

        horizontalLayout_3->addWidget(close_btn);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(widget_3);

        stackedWidget_main = new QStackedWidget(centralwidget);
        stackedWidget_main->setObjectName(QString::fromUtf8("stackedWidget_main"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_14 = new QVBoxLayout(page_4);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        set_pos_btn = new QPushButton(page_4);
        set_pos_btn->setObjectName(QString::fromUtf8("set_pos_btn"));
        set_pos_btn->setMinimumSize(QSize(0, 25));
        set_pos_btn->setMaximumSize(QSize(16777215, 16777215));
        set_pos_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/data/images/classes/SetInitialPose.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_pos_btn->setIcon(icon4);

        horizontalLayout_11->addWidget(set_pos_btn);

        set_goal_btn = new QPushButton(page_4);
        set_goal_btn->setObjectName(QString::fromUtf8("set_goal_btn"));
        set_goal_btn->setMinimumSize(QSize(0, 25));
        set_goal_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/data/images/classes/SetGoal.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_goal_btn->setIcon(icon5);

        horizontalLayout_11->addWidget(set_goal_btn);

        return_btn = new QPushButton(page_4);
        return_btn->setObjectName(QString::fromUtf8("return_btn"));
        return_btn->setMaximumSize(QSize(16777215, 25));
        return_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/data/images/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        return_btn->setIcon(icon6);

        horizontalLayout_11->addWidget(return_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout_13->addLayout(horizontalLayout_11);

        verticalLayout_build_map = new QVBoxLayout();
        verticalLayout_build_map->setSpacing(0);
        verticalLayout_build_map->setObjectName(QString::fromUtf8("verticalLayout_build_map"));
        mapViz = new QGraphicsView(page_4);
        mapViz->setObjectName(QString::fromUtf8("mapViz"));
        mapViz->setLayoutDirection(Qt::LeftToRight);
        mapViz->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"background-color: rgb(255,255,255);\n"
"}\n"
""));
        mapViz->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mapViz->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_build_map->addWidget(mapViz);

        widget_rviz = new QWidget(page_4);
        widget_rviz->setObjectName(QString::fromUtf8("widget_rviz"));
        widget_rviz->setMinimumSize(QSize(0, 100));
        widget_rviz->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"background-color: rgb(255,255,255);\n"
"}\n"
""));
        verticalLayout_16 = new QVBoxLayout(widget_rviz);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_rviz = new QVBoxLayout();
        verticalLayout_rviz->setObjectName(QString::fromUtf8("verticalLayout_rviz"));

        verticalLayout_16->addLayout(verticalLayout_rviz);


        verticalLayout_build_map->addWidget(widget_rviz);


        verticalLayout_13->addLayout(verticalLayout_build_map);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label = new QLabel(page_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 20));
        label->setMaximumSize(QSize(40, 20));

        horizontalLayout_12->addWidget(label);

        label_pos_map = new QLabel(page_4);
        label_pos_map->setObjectName(QString::fromUtf8("label_pos_map"));
        label_pos_map->setMinimumSize(QSize(200, 20));
        label_pos_map->setMaximumSize(QSize(200, 20));
        label_pos_map->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_12->addWidget(label_pos_map);

        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(40, 20));
        label_5->setMaximumSize(QSize(40, 20));

        horizontalLayout_12->addWidget(label_5);

        label_pos_scene = new QLabel(page_4);
        label_pos_scene->setObjectName(QString::fromUtf8("label_pos_scene"));
        label_pos_scene->setMinimumSize(QSize(200, 20));
        label_pos_scene->setMaximumSize(QSize(200, 20));

        horizontalLayout_12->addWidget(label_pos_scene);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);


        verticalLayout_13->addLayout(horizontalLayout_12);


        verticalLayout_14->addLayout(verticalLayout_13);

        stackedWidget_main->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_9 = new QVBoxLayout(page_5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_video2 = new QLabel(page_5);
        label_video2->setObjectName(QString::fromUtf8("label_video2"));
        label_video2->setMinimumSize(QSize(200, 195));
        label_video2->setMaximumSize(QSize(200, 200));
        label_video2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"background-color: rgb(255,255,255);\n"
"}\n"
""));

        verticalLayout_11->addWidget(label_video2);


        horizontalLayout_9->addLayout(verticalLayout_11);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_video3 = new QLabel(page_5);
        label_video3->setObjectName(QString::fromUtf8("label_video3"));
        label_video3->setMinimumSize(QSize(200, 200));
        label_video3->setMaximumSize(QSize(200, 200));
        label_video3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"background-color: rgb(255,255,255);\n"
"}\n"
""));

        verticalLayout_19->addWidget(label_video3);


        horizontalLayout_9->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_29 = new QLabel(page_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMaximumSize(QSize(90, 30));

        horizontalLayout_15->addWidget(label_29);

        refresh_topic_btn = new QPushButton(page_5);
        refresh_topic_btn->setObjectName(QString::fromUtf8("refresh_topic_btn"));
        refresh_topic_btn->setMinimumSize(QSize(90, 25));
        refresh_topic_btn->setMaximumSize(QSize(90, 25));
        refresh_topic_btn->setCursor(QCursor(Qt::ArrowCursor));
        refresh_topic_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/data/images/refreash.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_topic_btn->setIcon(icon7);

        horizontalLayout_15->addWidget(refresh_topic_btn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);


        verticalLayout_20->addLayout(horizontalLayout_15);

        topic_listWidget = new QListWidget(page_5);
        topic_listWidget->setObjectName(QString::fromUtf8("topic_listWidget"));
        topic_listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"background-color: rgb(255,255,255);\n"
"}\n"
""));

        verticalLayout_20->addWidget(topic_listWidget);


        horizontalLayout_9->addLayout(verticalLayout_20);


        verticalLayout_4->addLayout(horizontalLayout_9);

        view_logging = new QListView(page_5);
        view_logging->setObjectName(QString::fromUtf8("view_logging"));
        view_logging->setMinimumSize(QSize(300, 0));
        view_logging->setMaximumSize(QSize(12312312, 12312312));
        view_logging->setStyleSheet(QString::fromUtf8("QListView{\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"background-color: rgb(255,255,255);\n"
"}\n"
""));

        verticalLayout_4->addWidget(view_logging);


        verticalLayout_9->addLayout(verticalLayout_4);

        stackedWidget_main->addWidget(page_5);

        verticalLayout_5->addWidget(stackedWidget_main);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_4);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 60));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgb(211, 215, 207);\n"
"}"));
        horizontalLayout_24 = new QHBoxLayout(widget_2);
        horizontalLayout_24->setSpacing(0);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_menu = new QHBoxLayout();
        horizontalLayout_menu->setSpacing(0);
        horizontalLayout_menu->setObjectName(QString::fromUtf8("horizontalLayout_menu"));
        btn_status = new QPushButton(widget_2);
        btn_status->setObjectName(QString::fromUtf8("btn_status"));
        btn_status->setMinimumSize(QSize(0, 60));
        btn_status->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        btn_status->setIconSize(QSize(32, 32));

        horizontalLayout_menu->addWidget(btn_status);

        btn_control = new QPushButton(widget_2);
        btn_control->setObjectName(QString::fromUtf8("btn_control"));
        btn_control->setMinimumSize(QSize(0, 60));
        btn_control->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        btn_control->setIconSize(QSize(32, 32));

        horizontalLayout_menu->addWidget(btn_control);

        btn_map = new QPushButton(widget_2);
        btn_map->setObjectName(QString::fromUtf8("btn_map"));
        btn_map->setMinimumSize(QSize(0, 60));
        btn_map->setCursor(QCursor(Qt::PointingHandCursor));
        btn_map->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8(":/image/data/images/toolbar_map.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btn_map->setIcon(icon8);
        btn_map->setIconSize(QSize(32, 32));

        horizontalLayout_menu->addWidget(btn_map);

        btn_other = new QPushButton(widget_2);
        btn_other->setObjectName(QString::fromUtf8("btn_other"));
        btn_other->setMinimumSize(QSize(0, 60));
        btn_other->setCursor(QCursor(Qt::PointingHandCursor));
        btn_other->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8(":/image/data/images/toolbar_other.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btn_other->setIcon(icon9);
        btn_other->setIconSize(QSize(32, 32));

        horizontalLayout_menu->addWidget(btn_other);

        settings_btn = new QPushButton(widget_2);
        settings_btn->setObjectName(QString::fromUtf8("settings_btn"));
        settings_btn->setMinimumSize(QSize(0, 60));
        settings_btn->setCursor(QCursor(Qt::PointingHandCursor));
        settings_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background-color:rgb(186, 189, 182);\n"
"border-bottom:2px solid rgb(67, 154, 246);\n"
"}\n"
"QPushButton:checked{\n"
"background-color:cyan;\n"
"border-bottom:2px solid white \n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(67, 154, 246)\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(238, 238, 236);\n"
"border:none; \n"
"padding:0px 0px 0px 0px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        QIcon icon10;
        iconThemeName = QString::fromUtf8(":/image/data/images/setting.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        settings_btn->setIcon(icon10);
        settings_btn->setIconSize(QSize(32, 32));

        horizontalLayout_menu->addWidget(settings_btn);


        horizontalLayout_24->addLayout(horizontalLayout_menu);


        verticalLayout_6->addWidget(widget_2);


        verticalLayout_10->addLayout(verticalLayout_6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        stackedWidget_left->setCurrentIndex(1);
        stackedWidget_main->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ROS human-computer interaction software", nullptr));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindow", "&Function", nullptr));
#ifndef QT_NO_TOOLTIP
        action_Preferences->setToolTip(QApplication::translate("MainWindow", "Function", nullptr));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About &Qt", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "setup", nullptr));
#ifndef QT_NO_TOOLTIP
        action_2->setToolTip(QApplication::translate("MainWindow", "setup", nullptr));
#endif // QT_NO_TOOLTIP
        label_carback->setText(QString());
        forward->setText(QString());
#ifndef QT_NO_SHORTCUT
        forward->setShortcut(QApplication::translate("MainWindow", "W", nullptr));
#endif // QT_NO_SHORTCUT
        r_left->setText(QString());
#ifndef QT_NO_SHORTCUT
        r_left->setShortcut(QApplication::translate("MainWindow", "A", nullptr));
#endif // QT_NO_SHORTCUT
        stop->setText(QString());
#ifndef QT_NO_SHORTCUT
        stop->setShortcut(QApplication::translate("MainWindow", "S", nullptr));
#endif // QT_NO_SHORTCUT
        r_right->setText(QString());
#ifndef QT_NO_SHORTCUT
        r_right->setShortcut(QApplication::translate("MainWindow", "D", nullptr));
#endif // QT_NO_SHORTCUT
        back->setText(QString());
#ifndef QT_NO_SHORTCUT
        back->setShortcut(QApplication::translate("MainWindow", "X", nullptr));
#endif // QT_NO_SHORTCUT
        label_14->setText(QApplication::translate("MainWindow", "Angular velocity (cm/s):", nullptr));
        label_raw->setText(QApplication::translate("MainWindow", "100", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Linear speed (cm/s):", nullptr));
        label_linear->setText(QApplication::translate("MainWindow", "50", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\360\237\224\227Disconnect", nullptr));
        label_time->setText(QApplication::translate("MainWindow", "00:00:00", nullptr));
        label_19->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "System status:\357\274\232", nullptr));
        pushButton_status->setText(QString());
        label_10->setText(QString());
        label_6->setText(QString());
        label_11->setText(QString());
        label_power->setText(QApplication::translate("MainWindow", "00.00V", nullptr));
        min_btn->setText(QString());
        max_btn->setText(QString());
        close_btn->setText(QString());
        set_pos_btn->setText(QApplication::translate("MainWindow", "Set start point", nullptr));
        set_goal_btn->setText(QApplication::translate("MainWindow", "Set end point", nullptr));
        return_btn->setText(QApplication::translate("MainWindow", "Return Home", nullptr));
        label->setText(QApplication::translate("MainWindow", "map:", nullptr));
        label_pos_map->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "scene:", nullptr));
        label_pos_scene->setText(QString());
        label_video2->setText(QApplication::translate("MainWindow", "No Video", nullptr));
        label_video3->setText(QApplication::translate("MainWindow", "No Video", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Topic list", nullptr));
        refresh_topic_btn->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        btn_status->setText(QString());
        btn_control->setText(QString());
        btn_map->setText(QString());
        btn_other->setText(QString());
        settings_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
