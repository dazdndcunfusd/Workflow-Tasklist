#ifndef ADDTASKDIALOG_H
#define ADDTASKDIALOG_H

#include <QDialog>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

namespace Ui {
class addtaskdialog;
}

class addtaskdialog : public QDialog
{
    Q_OBJECT

public:
    explicit addtaskdialog(QWidget *parent = 0);
    ~addtaskdialog();
    QString value;
private slots:
    void on_addtaskdialog_accepted();

    void on_addtaskdialog_rejected();

    void setText(QString &value);
private:
    Ui::addtaskdialog *ui;
};

#endif // ADDTASKDIALOG_H
