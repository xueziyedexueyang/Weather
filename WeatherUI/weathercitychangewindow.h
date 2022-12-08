#ifndef WEATHERCITYCHANGEWINDOW_H
#define WEATHERCITYCHANGEWINDOW_H

#include <QObject>

class WeatherCityChangeWindow : public QObject
{
    Q_OBJECT
public:
    explicit WeatherCityChangeWindow(QObject *parent = nullptr);

signals:

};

#endif // WEATHERCITYCHANGEWINDOW_H
