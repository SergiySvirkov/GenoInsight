#include "gui/MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Set up the main layout
    mainLayout = new QVBoxLayout;
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);

    // Create UI components
    uploadButton = new QPushButton("Upload Genomic Data", this);
    analysisButton = new QPushButton("Start Analysis", this);
    uploadWidget = new UploadWidget(this);
    visualizationWidget = new VisualizationWidget(this);
    analysisWidget = new AnalysisWidget(this);
    recommendationWidget = new RecommendationWidget(this);

    // Connect button signals to slots
    connect(uploadButton, &QPushButton::clicked, this, &MainWindow::handleUploadButtonClick);
    connect(analysisButton, &QPushButton::clicked, this, &MainWindow::handleAnalysisButtonClick);

    // Add components to the main layout
    mainLayout->addWidget(uploadButton);
    mainLayout->addWidget(uploadWidget);
    mainLayout->addWidget(visualizationWidget);
    mainLayout->addWidget(analysisButton);
    mainLayout->addWidget(analysisWidget);
    mainLayout->addWidget(recommendationWidget);

    // Hide widgets initially
    uploadWidget->hide();
    visualizationWidget->hide();
    analysisWidget->hide();
    recommendationWidget->hide();
}

MainWindow::~MainWindow()
{
    // Destructor implementation
}

void MainWindow::handleUploadButtonClick()
{
    // Show the upload widget and hide others
    uploadWidget->show();
    visualizationWidget->hide();
    analysisWidget->hide();
    recommendationWidget->hide();
}

void MainWindow::handleAnalysisButtonClick()
{
    // Perform analysis and show the relevant widgets
    // For simplicity, we assume the analysis and recommendations are generated here
    QString genomicData = uploadWidget->getGenomicData();
    
    // Assuming GenomicDataAnalyzer and RecommendationEngine are properly implemented
    GenomicDataAnalyzer dataAnalyzer;
    std::string analysisResult = dataAnalyzer.analyze(genomicData.toStdString());

    RecommendationEngine recommendationEngine;
    std::string recommendations = recommendationEngine.generateRecommendations(analysisResult);

    // Display results
    visualizationWidget->setData(genomicData);
    analysisWidget->setAnalysisResult(QString::fromStdString(analysisResult));
    recommendationWidget->setRecommendations(QString::fromStdString(recommendations));

    // Show the relevant widgets and hide others
    uploadWidget->hide();
    visualizationWidget->show();
    analysisWidget->show();
    recommendationWidget->show();
}

