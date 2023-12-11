#ifndef GENOINSIGHT_VISUALIZATIONWIDGET_H
#define GENOINSIGHT_VISUALIZATIONWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

class VisualizationWidget : public QWidget {
    Q_OBJECT

public:
    // Constructor
    VisualizationWidget(QWidget *parent = nullptr);

    // Destructor
    ~VisualizationWidget();

    // Set genomic data for visualization
    void setData(const QString& genomicData);

private:
    // UI components
    QVBoxLayout *layout;
    QLabel *visualizationLabel;
    QLabel *genomicDataLabel;
};

#endif //GENOINSIGHT_VISUALIZATIONWIDGET_H

