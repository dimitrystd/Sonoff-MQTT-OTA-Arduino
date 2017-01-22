/*****************************************************************************************************\
 * User specific configuration parameters to override user_config.h
 * 
 * ATTENTION: - Changes to most PARAMETER defines will only override flash settings if you change
 *              define CFG_HOLDER. 
 *            - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *            - You still need to update user_config.h for major defines MODULE and USE_MQTT_TLS.
 *            - Changing MODULE defines are not being tested for validity as they are in user_config.h.
 *            - Most parameters can be changed online using commands via MQTT, WebConsole or serial.
 *            - So I see no use in this but anyway, your on your own.
\*****************************************************************************************************/

// Examples
#ifdef CFG_HOLDER
  #undef CFG_HOLDER
#endif
#define CFG_HOLDER             0x20170122

#ifdef STA_SSID1
  #undef STA_SSID1
#endif
#define STA_SSID1              "dms"      // [Ssid1] Wifi SSID
#ifdef STA_PASS1
  #undef STA_PASS1
#endif
#define STA_PASS1              ""  // [Password1] Wifi password

#ifdef WIFI_HOSTNAME
  #undef WIFI_HOSTNAME
#endif
#define WIFI_HOSTNAME          PROJECT

/*-------------------------------------------------------------------------------------------*\
 * Single wire devices DS18B20 and DS18S20
\*-------------------------------------------------------------------------------------------*/
//  #define DSB_PIN              3           // GPIO 3 = DS18x20 (RX pin on Sonoff Pow)
  // *** Option 1 - Single DS18B20 - Select either Option 1 OR Option 2
//  #define SEND_TELEMETRY_DS18B20            // Enable sending single temperature telemetry
  // *** Option 2 - Multiple DS18B20 and/or DS18S20 (needs OneWire library!)
//  #define SEND_TELEMETRY_DS18x20            // Enable sending multi temperature telemetry

