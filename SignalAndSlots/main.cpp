#include "signalandslots.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignalAndSlots w;
    w.show();
    w.setWindowTitle("SET VALUE");

    return a.exec();
}
