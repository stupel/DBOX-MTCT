#ifndef ISOCONVERTER_H
#define ISOCONVERTER_H

#include <QObject>
#include <QVector>
#include <QPoint>
#include <QDebug>
#include <QFile>
#include <QDataStream>
#include <string>
#include <bitset>
#include <tuple>

#define HEADER_LENGHT 24 // velkost hlavicky suboru je [24 B]
#define FINGER_VIEW_HEADER_LENGTH 4 // velkost hlavicky pre pole FINGER VIEW [4 B]
#define ISO_MINUTIA_LENGTH 6 // velkost jedneho markantu [6 B]
#define EXTENDED_DATA_BLOCK_LENGTH 2 // velkost bloku, ktory informuje o pocte extended bajtov [2 B]

typedef QVector<std::tuple<QPoint, int,int,int>> MINUTIAE_VECTOR;

class ISOConverter : public QObject
{
    Q_OBJECT
public:
    explicit ISOConverter(QObject *parent = nullptr);
    // vyska, sirka, kvalita odtlacku, markanty (suradnice, typ, uhol, kvalita)
    ISOConverter(int _fpHeight, int _fpWidth, int _fpQuality, MINUTIAE_VECTOR _minData);
    ~ISOConverter();

    int getFpHeight() const;
    void setFpHeight(int value);

    int getFpWidth() const;
    void setFpWidth(int value);

    int getFpQuality() const;
    void setFpQuality(int value);

    MINUTIAE_VECTOR getMinData() const;
    void setMinData(const MINUTIAE_VECTOR &value);

    int getTemplateSize() const;
    void setTemplateSize(int value);

    unsigned char* convert(); // funkcia na vytvorenie sablony v ISO/IEC 19794-2:2005 formate
    void saveToFile(const QString&); // funkcia na zapis sablony do suboru
    void load(int _fpHeight, int _fpWidth, int _fpQuality, MINUTIAE_VECTOR _minData); // nacitanie vsetkych potrebnych udajov


private:
    int fpHeight; // vyska odtlacku
    int fpWidth;  // sirka odtlacku
    int fpQuality; // kvalita <0,100>
    MINUTIAE_VECTOR minutiaeData; // vektor markantov
    // tuple < (x,y), type, angle(0-255), quality(0-100)>
    // kvalita 0 znamena quality not reported
    unsigned char* _ISO_template; // sablona v ISO formate
    int templateSize; // velkost aktualnej sablony
};

#endif // ISOCONVERTER_H
