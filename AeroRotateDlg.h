#ifndef AEROROTATEDLG_H
#define AEROROTATEDLG_H

#include <QDialog>
#include "ui_AeroRotateDlg.h"

class AeroRotateDlg : public QDialog
{
	Q_OBJECT

public:
	AeroRotateDlg(QWidget *parent = 0);
	~AeroRotateDlg();

public slots:

	void accept();
	void reject();

private:
	Ui::AeroRotateDlg ui;
};

#endif // AEROROTATEDLG_H
