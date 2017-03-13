#ifndef INFORMATIONPROJECT_H
#define INFORMATIONPROJECT_H

#include <QMainWindow>

namespace Ui {
class InformationProject;
}

class InformationProject : public QMainWindow
{
    Q_OBJECT

public:
    explicit InformationProject(QWidget *parent = 0);
    ~InformationProject();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Login_clicked();

private:
    Ui::InformationProject *ui;
};

#endif // INFORMATIONPROJECT_H
