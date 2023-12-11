#include "gui/UploadWidget.h"

UploadWidget::UploadWidget(QWidget *parent)
    : QWidget(parent)
{
    // Set up the main layout
    layout = new QVBoxLayout(this);

    // Create UI components
    instructionLabel = new QLabel("Enter your genomic data below:", this);
    genomicDataTextEdit = new QPlainTextEdit(this);
    uploadButton = new QPushButton("Upload", this);

    // Connect button signals to slots
    connect(uploadButton, &QPushButton::clicked, this, &UploadWidget::handleUploadButtonClick);

    // Add components to the layout
    layout->addWidget(instructionLabel);
    layout->addWidget(genomicDataTextEdit);
    layout->addWidget(uploadButton);
}

UploadWidget::~UploadWidget()
{
    // Destructor implementation
}

QString UploadWidget::getGenomicData() const
{
    // Return the genomic data entered by the user
    return genomicDataTextEdit->toPlainText();
}

void UploadWidget::handleUploadButtonClick()
{
    // Perform any additional actions when the upload button is clicked
    // For example, you might validate the input or trigger further actions
}

