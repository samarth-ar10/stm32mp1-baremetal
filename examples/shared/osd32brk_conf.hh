#pragma once
#include "drivers/leds.hh"

namespace OSD32BRK
{

using RedLED = Led<GPIOZ_BASE, 6, LedActive::Low>;
using GreenLED = Led<GPIOZ_BASE, 7, LedActive::Low>;
using RedLED2 = Led<GPIOI_BASE, 8, LedActive::Low>;
using GreenLED2 = Led<GPIOI_BASE, 9, LedActive::Low>;

using OrangeLED = RedLED2; //For compatibility with STM32MP1 Discovery board
using BlueLED = GreenLED2; //For compatibility with STM32MP1 Discovery board
} // namespace OSD32BRK
