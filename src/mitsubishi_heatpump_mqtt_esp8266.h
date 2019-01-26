
//#define OTA

// Version setup
const char* firmware_name        = "Mitsubishi HVAC MQTT bridge";
const char* firmware_version     = "0.19.1.21a";

// wifi settings
const char* ssid     = "xxxx";
const char* password = "xxxx";

// mqtt server settings
const char* mqtt_server   = "xxx.xxx.xxx.xxx";
const int mqtt_port       = 1883;
const char* mqtt_username = "xxxx";
const char* mqtt_password = "xxxx";

// mqtt client settings
// Note PubSubClient.h has a MQTT_MAX_PACKET_SIZE of 128 defined, so either raise it to 256 or use short topics
const char* client_id                   = "hvac_node_name"; // Must be unique on the MQTT network
const char* heatpump_topic              = "hvac/node_name/topic";  // ex: {"power":"ON","mode":"HEAT","temperature":24,"fan":"AUTO","vane":"5","wideVane":"|"}
const char* heatpump_set_topic          = "hvac/node_name/set";
const char* heatpump_status_topic       = "hvac/node_name/status"; // ex: {"roomTemperature":18,"operating":true}
const char* heatpump_timers_topic       = "hvac/node_name/timers"; // ex: {"mode":"NONE","onMins":0,"onRemainMins":0,"offMins":0,"offRemainMins":0}

const char* heatpump_debug_topic        = "hvac/node_name/debug";
const char* heatpump_debug_fw_topic     = "hvac/node_name/debug/firmware";
const char* heatpump_debug_set_topic    = "hvac/node_name/debug/set";

// pinouts
//const int redLedPin  = 0; // Onboard LED = digital pin 0 (red LED on adafruit ESP8266 huzzah)
const int blueLedPin = 2; // Onboard LED = digital pin 0 (blue LED on adafruit ESP8266 huzzah)

// sketch settings
const unsigned int SEND_ROOM_TEMP_INTERVAL_MS = 10000;
const unsigned int STATUS_READ_INTERVAL_MS = 5000;
const bool IS_DEBUG_MODE = false;
