#ifndef ENERGY_H
#define ENERGY_H


class energy
{
    public:
        void energ();
    private:
        float jtokj(float z);
        float jtobtu(float z);
        float jtocal(float z);
        float jtokcal(float z);
        float jtokwh(float z);
        float jtoev(float z);
        float kjtoj(float z);
        float kjtobtu(float z);
        float kjtocal(float z);
        float kjtokcal(float z);
        float btutokj(float z);
        float btutoj(float z);
        float btutokwh(float z);
        float kwhtobtu(float z);
        float kwhtoj(float z);
        float caltoj(float z);
        float caltokj(float z);
        float caltokcal(float z);
        float kcaltocal(float z);
        float kcaltoj(float z);
        float kcaltokj(float z);
        float evtoj(float z);
        float evtokev(float z);
        float evtomev(float z);
        float evtogev(float z);
        float kevtoev(float z);
        float mevtoev(float z);
        float gevtoev(float z);
};

#endif // ENERGY_H
