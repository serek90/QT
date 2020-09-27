#ifndef SIGNALANDSLOTS_H
#define SIGNALANDSLOTS_H

#include <QMainWindow>

namespace Ui {
class SignalAndSlots;
}

class SignalAndSlots : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignalAndSlots(QWidget *parent = nullptr);
    ~SignalAndSlots();

private:
    Ui::SignalAndSlots *ui;
};

#endif // SIGNALANDSLOTS_H
