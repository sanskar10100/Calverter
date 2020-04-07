#ifndef FREQUENCY_H
#define FREQUENCY_H


class frequency
{
    public:
        void frequenc();
    private:
        float hztokhz(float v);
        float hztomhz(float v);
        float hztoghz(float v);
        float hztothz(float v);
        float hztorad(float v);
        float khztohz(float v);
        float khztomhz(float v);
        float khztoghz(float v);
        float khztothz(float v);
        float mhztohz(float v);
        float mhztokhz(float v);
        float mhztoghz(float v);
        float mhztothz(float v);
        float ghztohz(float v);
        float ghztokhz(float v);
        float ghztomhz(float v);
        float ghztothz(float v);
        float thztohz(float v);
        float thztokhz(float v);
        float thztomhz(float v);
        float thztoghz(float v);
        float radtohz(float v);
};

#endif // FREQUENCY_H
