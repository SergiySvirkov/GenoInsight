#include <QApplication>
#include "gui/MainWindow.h"

int main(int argc, char *argv[]) {
    // Initialize the Qt application
    QApplication app(argc, argv);

    // Create the main window
    MainWindow mainWindow;
    mainWindow.show();

    // Start the application event loop
    return app.exec();
}
