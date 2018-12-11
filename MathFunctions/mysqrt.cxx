#include "TutorialConfig.h"
#include "Table.h"
#include <math.h>
#include <stdio.h>

double mysqrt(double v) {
#if defined (HAVE_LOG) && defined (HAVE_EXP)
    return exp(log(v)*0.5);
#else
    return sqrt(v);
#endif
}
