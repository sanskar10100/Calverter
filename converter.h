#ifndef CONVERTER_H
#define CONVERTER_H

#include "Temperature.h"
#include "arithmetic.h"
#include "weight.h"
#include "charge.h"
#include "length.h"
#include "voltage.h"
#include "frequency.h"
#include "power.h"
#include "credit.h"
#include "square.h"
#include "energy.h"

class converter : private arithmetic, private charge, private energy, private frequency, private length, private power, private temperature, private voltage, private weight
{
    public:
        void convert();
};

#endif // CONVERTER_H
