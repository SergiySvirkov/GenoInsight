#ifndef GENOINSIGHT_MAINWINDOW_H
#define GENOINSIGHT_MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include "gui/UploadWidget.h"
#include "gui/VisualizationWidget.h"
#include "gui/AnalysisWidget.h"
#include "gui/RecommendationWidget.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    // Constructor
    MainWindow(QWidget *parent = nullptr);

    // Destructor
    ~MainWindow();

private slots:
    // Slot for handling the upload button click
    void handleUploadButtonClick();

    // Slot for handling the analysis button click
    void handleAnalysisButtonClick();

private:
    // UI components
    QVBoxLayout *mainLayout;
    QPushButton *uploadButton;
    QPushButton *analysisButton;
    UploadWidget *uploadWidget;
    VisualizationWidget *visualizationWidget;
    AnalysisWidget *analysisWidget;
    RecommendationWidget *recommendationWidget;
};

#endif //GENOINSIGHT_MAINWINDOW_H

