#include "mainwindow.h"
#include <QApplication>
#include <mgl2/qt.h>
int sample(mglGraph *gr)
{
  gr->Rotate(60,40);
  gr->Box();
  return 0;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    mglQT gr(sample,"MathGL examples");
    gr.Run();
    return a.exec();
}

//-----------------------------------------------------
