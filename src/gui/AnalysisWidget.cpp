#include "gui/AnalysisWidget.h"

AnalysisWidget::AnalysisWidget(QWidget *parent)
    : QWidget(parent)
{
    // Set up the main layout
    layout = new QVBoxLayout(this);

    // Create UI components
    analysisLabel = new QLabel("Genomic Data Analysis", this);
    analysisResultTextEdit = new QPlainTextEdit(this);

    // Add components to the layout
    layout->addWidget(analysisLabel);
    layout->addWidget(analysisResultTextEdit);
}

AnalysisWidget::~AnalysisWidget()
{
    // Destructor implementation
}

void AnalysisWidget::setAnalysisResult(const QString& result)
{
    // Display the analysis result in the widget
    analysisResultTextEdit->setPlainText(result);
}
