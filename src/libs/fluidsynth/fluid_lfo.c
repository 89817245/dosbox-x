#define FLUIDINC
#include "config.h"
#if !C_FLUIDSYNTH && defined(WIN32) && !defined(C_HX_DOS)
#include "fluid_lfo.h"

void
fluid_lfo_set_incr(fluid_lfo_t* lfo, fluid_real_t increment)
{
  lfo->increment = increment;
}

void
fluid_lfo_set_delay(fluid_lfo_t* lfo, unsigned int delay)
{
  lfo->delay = delay;
}
#endif