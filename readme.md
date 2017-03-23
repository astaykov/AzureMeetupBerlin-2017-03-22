## Azure Meetup Berlin - Mar. 22nd 2017
This repository contains 2 arduino sketches which were used during the *IoT on Budget* talk.

The first sketch [NodeMCU_RelayLoop](NodeMCU_RelayLoop/) is just a relay switching in a loop.

Second sketch - [ESP8266_AzureIoT_RemoteRelay](ESP8266_AzureIoT_RemoteRelay/) is almost entirely based on the "SimpleSample_MQTT" 
When looking at this sketch the most important part is the [iot_configs.h](ESP8266_AzureIoT_RemoteRelay/iot_configs.h) file where you have exactly 4 things to configure:

```c
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
```

The file is self explanatory. This is all you have to change to make your device work.

In order to send commands to devices, the easiest way is to use the [Device Explorer](https://github.com/Azure/azure-iot-sdk-csharp/tree/master/tools/DeviceExplorer). 
There is also binary download, so you do not have to compile it: [SetupDeviceExplorer.msi](https://github.com/Azure/azure-iot-sdks/releases/download/2016-11-17/SetupDeviceExplorer.msi).

The command that would trigger Relay One (connected to pin D1 of your device) would be:
(copy and paste this JSON string in Device Explorer when you send command to device)
```json
{"Name" : "TriggerRelayOne","Parameters" : {}}
```

The command that would trigger Relay Two (connected to pin D2 of your device) would be:
```json
{"Name" : "TriggerRelayTwo","Parameters" : {}}
```

> **Note**
>
> Trigger will just change the state of the relay - if it was ON it will turn to OFF and vice-versa.

You can find more about Arduino support from Azure IoT on the dedicated repository here: [azure-iot-arduino](https://github.com/Azure/azure-iot-arduino)

## Starting points for the devices
To avoid direct advertisement, I will not include links to concrete products, but here are the terms you should search for:

 - ESP8266
 - NodeMCU
 - RelayModule Arduino
 - Jumper Cables

There are various sites for cheap electronic products and on the meeting you saw real examples.

## Slides

You can find the slides used for the meeting on [Slide Share - IoT on budged](https://www.slideshare.net/AntonStaykov/iot-on-budget).

## Disclaimer

Wroking with mains voltage and current **IS** dangerous so make sure you know what you are doing! 
But before cutting the wires of your Lamp or TV, you can still experiment with just the Modules - 
they work with standard USB voltage supply - 5V DC, which is not dangerous for humans.

