#ifndef GENOINSIGHT_RECOMMENDATIONWIDGET_H
#define GENOINSIGHT_RECOMMENDATIONWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPlainTextEdit>

class RecommendationWidget : public QWidget {
    Q_OBJECT

public:
    // Constructor
    RecommendationWidget(QWidget *parent = nullptr);

    // Destructor
    ~RecommendationWidget();

    // Set personalized recommendations for display
    void setRecommendations(const QString& recommendations);

private:
    // UI components
    QVBoxLayout *layout;
    QLabel *recommendationLabel;
    QPlainTextEdit *recommendationTextEdit;
};

#endif //GENOINSIGHT_RECOMMENDATIONWIDGET_H

