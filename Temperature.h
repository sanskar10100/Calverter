#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class temperature
{
public:
    void temperatur();
private:
        float ctof(float temp);
        float ftoc(float temp);
        float ctok(float temp);
        float ftok(float temp);
        float ktoc(float temp);
        float ktof(float temp);
        float ftor(float temp);
        float ctor(float temp);
        float ktor(float temp);
        float rtof(float temp);
        float rtoc(float temp);
        float rtok(float temp);
};

#endif // TEMPERATURE_H
