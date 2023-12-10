#pragma once

#include <AP_HAL/AP_HAL_Boards.h>

#ifndef HAL_SIM_ADSB_ENABLED
#define HAL_SIM_ADSB_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif

#ifndef HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED
#define HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif

#ifndef HAL_SIM_PS_RPLIDARA1_ENABLED
#define HAL_SIM_PS_RPLIDARA1_ENABLED HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED
#endif

#ifndef HAL_SIM_PS_RPLIDARA2_ENABLED
#define HAL_SIM_PS_RPLIDARA2_ENABLED HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED
#endif

#ifndef AP_SIM_IS31FL3195_ENABLED
#define AP_SIM_IS31FL3195_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif

#ifndef AP_SIM_SHIP_ENABLED
#define AP_SIM_SHIP_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif

#ifndef AP_SIM_TSYS03_ENABLED
#define AP_SIM_TSYS03_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif

#ifndef AP_SIM_ADSB_SAGETECH_MXS_ENABLED
#define AP_SIM_ADSB_SAGETECH_MXS_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif

#ifndef AP_SIM_SERIALDEVICE_CORRUPTION_ENABLED
#define AP_SIM_SERIALDEVICE_CORRUPTION_ENABLED 0
#endif

#ifndef HAL_SIM_GPS_ENABLED
#define HAL_SIM_GPS_ENABLED AP_SIM_ENABLED
#endif

#ifndef AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#define AP_SIM_GPS_BACKEND_DEFAULT_ENABLED AP_SIM_ENABLED
#endif

#ifndef AP_SIM_GPS_FILE_ENABLED
// really need to use AP_FileSystem for this.
#define AP_SIM_GPS_FILE_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL || CONFIG_HAL_BOARD == HAL_BOARD_LINUX)
#endif

#ifndef AP_SIM_GPS_TRIMBLE_ENABLED
#define AP_SIM_GPS_TRIMBLE_ENABLED AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_SIM_GPS_MSP_ENABLED
#define AP_SIM_GPS_MSP_ENABLED AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_SIM_GPS_NMEA_ENABLED
#define AP_SIM_GPS_NMEA_ENABLED AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_SIM_GPS_NOVA_ENABLED
#define AP_SIM_GPS_NOVA_ENABLED AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_SIM_GPS_SBP2_ENABLED
#define AP_SIM_GPS_SBP2_ENABLED AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_SIM_GPS_SBP_ENABLED
#define AP_SIM_GPS_SBP_ENABLED AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_SIM_GPS_UBLOX_ENABLED
#define AP_SIM_GPS_UBLOX_ENABLED AP_SIM_GPS_BACKEND_DEFAULT_ENABLED
#endif
