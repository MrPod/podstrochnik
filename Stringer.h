#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Stringer.h"

class Stringer : public QMainWindow
{
    Q_OBJECT

public:
    Stringer(QWidget *parent = Q_NULLPTR);

private:
    Ui::StringerClass ui;
};
