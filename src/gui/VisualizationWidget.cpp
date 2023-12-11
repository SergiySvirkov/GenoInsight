#include "gui/VisualizationWidget.h"

VisualizationWidget::VisualizationWidget(QWidget *parent)
    : QWidget(parent)
{
    // Set up the main layout
    layout = new QVBoxLayout(this);

    // Create UI components
    visualizationLabel = new QLabel("Genomic Data Visualization", this);
    genomicDataLabel = new QLabel(this);

    // Add components to the layout
    layout->addWidget(visualizationLabel);
    layout->addWidget(genomicDataLabel);
}

VisualizationWidget::~VisualizationWidget()
{
    // Destructor implementation
}

void VisualizationWidget::setData(const QString& genomicData)
{
    // Display the genomic data in the visualization widget
    genomicDataLabel->setText("Genomic Data:\n" + genomicData);
}

