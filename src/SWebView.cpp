#include "SWebView.h"

#include <QMessageBox>

SWebView::SWebView(QWidget * parent, QUrl url) 
	//QWebEngineView(parent)
{
	connect(this->page(), SIGNAL(fullScreenRequested(QWebEngineFullScreenRequest)), this, SLOT(setFullScreen(QWebEngineFullScreenRequest)));

	load(url);
}

SWebView::~SWebView()
{
	// Empty
}

void SWebView::setFullScreen(QWebEngineFullScreenRequest* request)
{
	QMessageBox::information(this, "DEBUG", "Full screen requested");
}