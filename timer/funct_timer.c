#include "timer.h"
#include "lpc17xx.h"
#include "../led/led.h"
#include "../const.h"


void clear_timer(uint8_t timer_num)
{
    disable_timer(timer_num); 
    reset_timer(timer_num);
}
