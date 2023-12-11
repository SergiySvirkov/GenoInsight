#ifndef GENOINSIGHT_ANALYSISWIDGET_H
#define GENOINSIGHT_ANALYSISWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPlainTextEdit>

class AnalysisWidget : public QWidget {
    Q_OBJECT

public:
    // Constructor
    AnalysisWidget(QWidget *parent = nullptr);

    // Destructor
    ~AnalysisWidget();

    // Set the analysis result for display
    void setAnalysisResult(const QString& result);

private:
    // UI components
    QVBoxLayout *layout;
    QLabel *analysisLabel;
    QPlainTextEdit *analysisResultTextEdit;
};

#endif //GENOINSIGHT_ANALYSISWIDGET_H
