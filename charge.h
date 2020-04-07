#ifndef CHARGE_H
#define CHARGE_H


class charge
{
    public:
       void charg();
    private:
        float ctopc(float c);
        float ctonc(float c);
        float ctouc(float c);
        float ctomc(float c);
        float ctoec(float c);
        float ctoah(float c);
        float pctoc(float c);
        float nctoc(float c);
        float uctoc(float c);
        float mctoc(float c);
        float ectoc(float c);
        float ahtoc(float c);
};

#endif // CHARGE_H
