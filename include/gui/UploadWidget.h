#ifndef GENOINSIGHT_UPLOADWIDGET_H
#define GENOINSIGHT_UPLOADWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPlainTextEdit>
#include <QPushButton>

class UploadWidget : public QWidget {
    Q_OBJECT

public:
    // Constructor
    UploadWidget(QWidget *parent = nullptr);

    // Destructor
    ~UploadWidget();

    // Get the genomic data entered by the user
    QString getGenomicData() const;

private slots:
    // Slot for handling the upload button click
    void handleUploadButtonClick();

private:
    // UI components
    QVBoxLayout *layout;
    QLabel *instructionLabel;
    QPlainTextEdit *genomicDataTextEdit;
    QPushButton *uploadButton;
};

#endif //GENOINSIGHT_UPLOADWIDGET_H

