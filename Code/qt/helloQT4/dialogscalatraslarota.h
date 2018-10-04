#ifndef DIALOGSCALATRASLAROTA_H
#define DIALOGSCALATRASLAROTA_H
#include <QDialog>
#include "datadialogscalatraslarota.h"

//#include "mainwindow.h"

class QCheckBox;
class QDialogButtonBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTextBox;
class MainWindow;

class DialogScalaTraslaRota : public QDialog
{
    Q_OBJECT

public:
    DialogScalaTraslaRota(QWidget *parent = 0);
    //DialogScalaTraslaRota(QWidget *parent = 0, DataDialogScalaTraslaRota* aModel );
    MainWindow *parent;

private:
    QLabel *label;
    QLabel *label2;
    QLabel *labelGaussNoise;
    QLabel *labelCosmicNoise;
    QLineEdit *saveFile;
    QLabel *labScaleX;
    QLineEdit *scaleX;
    QLabel *labScaleY;
    QLineEdit *scaleY;
    QLabel *labScaleZ;
    QLineEdit *scaleZ;
    QLabel *labTraslaX;
    QLineEdit *traslaX;
    QLabel *labTraslaY;
    QLineEdit *traslaY;
    QLabel *labTraslaZ;
    QLineEdit *traslaZ;
    QLabel *labRotaX;
    QLineEdit *rotaX;
    QLabel *labRotaY;
    QLineEdit *rotaY;
    QLabel *labRotaZ;
    QLineEdit *rotaZ;
    QLabel *labOffset;
    QLineEdit *timeOffset;

    QLineEdit *gaussianNoiseDeviation;
    QLineEdit *cosmicNoiseDeviation;
    QCheckBox *scaleCheckBox;
    QCheckBox *traslaCheckBox;
    QCheckBox *rotaCheckBox;
    //QCheckBox *Gaussian_Noise;
    //QCheckBox *Cosmic_Noise;
    QDialogButtonBox *buttonBox;
    QPushButton *modifyButton;
    //QPushButton *moreButton;
    QWidget *extension;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;
    DataDialogScalaTraslaRota* dialogModel;
public slots:
    void onOK();
    void onCancel();


 public:
    void setDataDialog(DataDialogScalaTraslaRota* aModel);
    DataDialogScalaTraslaRota* getDataDialog();

};

#endif // DIALOGSCALATRASLAROTA_H
