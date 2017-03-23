#ifndef IOT_CONFIGS_H
#define IOT_CONFIGS_H

/**
 * WiFi setup
 */
#define IOT_CONFIG_WIFI_SSID            "PUT_YOUR_WIFI_SSID_HERE"
#define IOT_CONFIG_WIFI_PASSWORD        "PUT_YOUR_WIFI_PASSWORD_HERE"
/**
 * Find under Microsoft Azure IoT Suite -> DEVICES -> <your device> -> Device Details and Authentication Keys
 * String containing Hostname, Device Id & Device Key in the format:
 *  "HostName=<host_name>;DeviceId=<device_id>;SharedAccessKey=<device_key>"    
 */
#define IOT_CONFIG_CONNECTION_STRING    "HostName=[YOUR_HUB_NAME].azure-devices.net;DeviceId=[DEVICE_ID_FROM_IOT_HUB];SharedAccessKey=[DEVICE_KEY_FROM_IOT_HUB]"

/** 
 * Choose the transport protocol
 */
#define IOT_CONFIG_MQTT                 // uncomment this line for MQTT
//#define IOT_CONFIG_HTTP              // uncomment this line for HTTP

#endif /* IOT_CONFIGS_H */
