#ifndef VOLTAGE_H
#define VOLTAGE_H


class voltage
{
    public:
        void voltag();
    private:
        float vtou(float v);
        float vtom(float v);
        float vtokv(float v);
        float vtomv(float v);
        float vtogv(float v);
        float utov(float v);
        float mtov(float v);
        float kvtov(float v);
        float mvtov(float v);
        float gvtov(float v);
};

#endif // VOLTAGE_H
