#ifndef POWER_H
#define POWER_H


class power
{
    public:
        void powe();
    private:
        float bhptokw (float p);
        float btutokw (float p);
        float btutoton(float p);
        float btutow(float p);
        float dbmtomw(float p);
        float dbmtow(float p);
        float gwtow(float p);
        float hptokw(float p);
        float hptow(float p);
        float kwtobhp(float p);
        float kwtobtu(float p);
        float kwtohp(float p);
        float kwtomw(float p);
        float kwtomgw(float p);
        float kwtoton(float p);
        float kwtow(float p);
        float mwtow(float p);
        float mwtokw(float p);
        float mwtodbm(float p);
        float mgwtow(float p);
        float mgwtokw(float p);
        float tontobtu(float p);
        float tontokw(float p);
        float wtomw(float p);
        float wtokw(float p);
        float wtomgw(float p);
        float wtogw(float p);
        float wtodbm(float p);
        float wtohp(float p);
        float wtobtu(float p);
};

#endif // POWER_H
