

// This file is generated, please do not edit.
// Change mobileair-cfg.h.py instead.

enum ConfigEntryType : unsigned short {
	Config_Type_Bool,
	Config_Type_UInt,
	Config_Type_Time,
	Config_Type_String,
	Config_Type_Password,
    Config_Type_Hex
};

struct ConfigShapeEntry {
	enum ConfigEntryType cfg_type;
	unsigned short cfg_len;
	const char* _cfg_key;
	union {
		void* as_void;
		bool* as_bool;
		unsigned int* as_uint;
		char* as_str;
	} cfg_val;
	const __FlashStringHelper* cfg_key() const { return FPSTR(_cfg_key); }
};

enum ConfigShapeId {
	Config_has_wifi,
	Config_wifi_format,
	Config_has_lora,
	Config_has_nbiot,
	Config_apn,
	Config_config_nbiot,
	Config_nbiot_format,
	Config_appeui,
	Config_deveui,
	Config_appkey,
	Config_current_lang,
	Config_wlanssid,
	Config_wlanpwd,
	Config_www_username,
	Config_www_password,
	Config_fs_ssid,
	Config_fs_pwd,
	Config_www_basicauth_enabled,
	Config_npm_read,
	Config_bmx280_read,
	Config_height_above_sealevel,
	Config_ccs811_read,
	Config_enveano2_read,
	Config_send2dusti,
	Config_ssl_dusti,
	Config_send2madavi,
	Config_ssl_madavi,
	Config_send2csv,
	Config_has_led_value,
	Config_brightness,
	Config_value_displayed,
	Config_rgpd,
	Config_debug,
	Config_sending_intervall_ms_static,
	Config_sending_intervall_ms_mobile,
	Config_time_for_wifi_config,
	Config_send2custom,
	Config_host_custom,
	Config_url_custom,
	Config_port_custom,
	Config_user_custom,
	Config_pwd_custom,
	Config_ssl_custom,
	Config_send2custom2,
	Config_host_custom2,
	Config_url_custom2,
	Config_port_custom2,
	Config_user_custom2,
	Config_pwd_custom2,
	Config_ssl_custom2,
	Config_has_sdcard,
	Config_display_measure,
	Config_display_device_info,
	Config_has_gps,
	Config_has_ssd1306,
	Config_has_sh1106,
	Config_host_nbiot_json,
	Config_url_nbiot_json,
	Config_port_nbiot_json,
	Config_user_nbiot_json,
	Config_pwd_nbiot_json,
	Config_ssl_nbiot_json,
	Config_host_nbiot_byte,
	Config_url_nbiot_byte,
	Config_port_nbiot_byte,
	Config_user_nbiot_byte,
	Config_pwd_nbiot_byte,
	Config_ssl_nbiot_byte,
};
static constexpr char CFG_KEY_HAS_WIFI[] PROGMEM = "has_wifi";
static constexpr char CFG_KEY_WIFI_FORMAT[] PROGMEM = "wifi_format";
static constexpr char CFG_KEY_HAS_LORA[] PROGMEM = "has_lora";
static constexpr char CFG_KEY_HAS_NBIOT[] PROGMEM = "has_nbiot";
static constexpr char CFG_KEY_APN[] PROGMEM = "apn";
static constexpr char CFG_KEY_CONFIG_NBIOT[] PROGMEM = "config_nbiot";
static constexpr char CFG_KEY_NBIOT_FORMAT[] PROGMEM = "nbiot_format";
static constexpr char CFG_KEY_APPEUI[] PROGMEM = "appeui";
static constexpr char CFG_KEY_DEVEUI[] PROGMEM = "deveui";
static constexpr char CFG_KEY_APPKEY[] PROGMEM = "appkey";
static constexpr char CFG_KEY_CURRENT_LANG[] PROGMEM = "current_lang";
static constexpr char CFG_KEY_WLANSSID[] PROGMEM = "wlanssid";
static constexpr char CFG_KEY_WLANPWD[] PROGMEM = "wlanpwd";
static constexpr char CFG_KEY_WWW_USERNAME[] PROGMEM = "www_username";
static constexpr char CFG_KEY_WWW_PASSWORD[] PROGMEM = "www_password";
static constexpr char CFG_KEY_FS_SSID[] PROGMEM = "fs_ssid";
static constexpr char CFG_KEY_FS_PWD[] PROGMEM = "fs_pwd";
static constexpr char CFG_KEY_WWW_BASICAUTH_ENABLED[] PROGMEM = "www_basicauth_enabled";
static constexpr char CFG_KEY_NPM_READ[] PROGMEM = "npm_read";
static constexpr char CFG_KEY_BMX280_READ[] PROGMEM = "bmx280_read";
static constexpr char CFG_KEY_HEIGHT_ABOVE_SEALEVEL[] PROGMEM = "height_above_sealevel";
static constexpr char CFG_KEY_CCS811_READ[] PROGMEM = "ccs811_read";
static constexpr char CFG_KEY_ENVEANO2_READ[] PROGMEM = "enveano2_read";
static constexpr char CFG_KEY_SEND2DUSTI[] PROGMEM = "send2dusti";
static constexpr char CFG_KEY_SSL_DUSTI[] PROGMEM = "ssl_dusti";
static constexpr char CFG_KEY_SEND2MADAVI[] PROGMEM = "send2madavi";
static constexpr char CFG_KEY_SSL_MADAVI[] PROGMEM = "ssl_madavi";
static constexpr char CFG_KEY_SEND2CSV[] PROGMEM = "send2csv";
static constexpr char CFG_KEY_HAS_LED_VALUE[] PROGMEM = "has_led_value";
static constexpr char CFG_KEY_BRIGHTNESS[] PROGMEM = "brightness";
static constexpr char CFG_KEY_VALUE_DISPLAYED[] PROGMEM = "value_displayed";
static constexpr char CFG_KEY_RGPD[] PROGMEM = "rgpd";
static constexpr char CFG_KEY_DEBUG[] PROGMEM = "debug";
static constexpr char CFG_KEY_SENDING_INTERVALL_MS_STATIC[] PROGMEM = "sending_intervall_ms_static";
static constexpr char CFG_KEY_SENDING_INTERVALL_MS_MOBILE[] PROGMEM = "sending_intervall_ms_mobile";
static constexpr char CFG_KEY_TIME_FOR_WIFI_CONFIG[] PROGMEM = "time_for_wifi_config";
static constexpr char CFG_KEY_SEND2CUSTOM[] PROGMEM = "send2custom";
static constexpr char CFG_KEY_HOST_CUSTOM[] PROGMEM = "host_custom";
static constexpr char CFG_KEY_URL_CUSTOM[] PROGMEM = "url_custom";
static constexpr char CFG_KEY_PORT_CUSTOM[] PROGMEM = "port_custom";
static constexpr char CFG_KEY_USER_CUSTOM[] PROGMEM = "user_custom";
static constexpr char CFG_KEY_PWD_CUSTOM[] PROGMEM = "pwd_custom";
static constexpr char CFG_KEY_SSL_CUSTOM[] PROGMEM = "ssl_custom";
static constexpr char CFG_KEY_SEND2CUSTOM2[] PROGMEM = "send2custom2";
static constexpr char CFG_KEY_HOST_CUSTOM2[] PROGMEM = "host_custom2";
static constexpr char CFG_KEY_URL_CUSTOM2[] PROGMEM = "url_custom2";
static constexpr char CFG_KEY_PORT_CUSTOM2[] PROGMEM = "port_custom2";
static constexpr char CFG_KEY_USER_CUSTOM2[] PROGMEM = "user_custom2";
static constexpr char CFG_KEY_PWD_CUSTOM2[] PROGMEM = "pwd_custom2";
static constexpr char CFG_KEY_SSL_CUSTOM2[] PROGMEM = "ssl_custom2";
static constexpr char CFG_KEY_HAS_SDCARD[] PROGMEM = "has_sdcard";
static constexpr char CFG_KEY_DISPLAY_MEASURE[] PROGMEM = "display_measure";
static constexpr char CFG_KEY_DISPLAY_DEVICE_INFO[] PROGMEM = "display_device_info";
static constexpr char CFG_KEY_HAS_GPS[] PROGMEM = "has_gps";
static constexpr char CFG_KEY_HAS_SSD1306[] PROGMEM = "has_ssd1306";
static constexpr char CFG_KEY_HAS_SH1106[] PROGMEM = "has_sh1106";
static constexpr char CFG_KEY_HOST_NBIOT_JSON[] PROGMEM = "host_nbiot_json";
static constexpr char CFG_KEY_URL_NBIOT_JSON[] PROGMEM = "url_nbiot_json";
static constexpr char CFG_KEY_PORT_NBIOT_JSON[] PROGMEM = "port_nbiot_json";
static constexpr char CFG_KEY_USER_NBIOT_JSON[] PROGMEM = "user_nbiot_json";
static constexpr char CFG_KEY_PWD_NBIOT_JSON[] PROGMEM = "pwd_nbiot_json";
static constexpr char CFG_KEY_SSL_NBIOT_JSON[] PROGMEM = "ssl_nbiot_json";
static constexpr char CFG_KEY_HOST_NBIOT_BYTE[] PROGMEM = "host_nbiot_byte";
static constexpr char CFG_KEY_URL_NBIOT_BYTE[] PROGMEM = "url_nbiot_byte";
static constexpr char CFG_KEY_PORT_NBIOT_BYTE[] PROGMEM = "port_nbiot_byte";
static constexpr char CFG_KEY_USER_NBIOT_BYTE[] PROGMEM = "user_nbiot_byte";
static constexpr char CFG_KEY_PWD_NBIOT_BYTE[] PROGMEM = "pwd_nbiot_byte";
static constexpr char CFG_KEY_SSL_NBIOT_BYTE[] PROGMEM = "ssl_nbiot_byte";
static constexpr ConfigShapeEntry configShape[] PROGMEM = {
	{ Config_Type_Bool, 0, CFG_KEY_HAS_WIFI, &cfg::has_wifi },
	{ Config_Type_UInt, 0, CFG_KEY_WIFI_FORMAT, &cfg::wifi_format },
	{ Config_Type_Bool, 0, CFG_KEY_HAS_LORA, &cfg::has_lora },
	{ Config_Type_Bool, 0, CFG_KEY_HAS_NBIOT, &cfg::has_nbiot },
	{ Config_Type_String, sizeof(cfg::apn)-1, CFG_KEY_APN, cfg::apn },
	{ Config_Type_Bool, 0, CFG_KEY_CONFIG_NBIOT, &cfg::config_nbiot },
	{ Config_Type_UInt, 0, CFG_KEY_NBIOT_FORMAT, &cfg::nbiot_format },
	{ Config_Type_Hex, sizeof(cfg::appeui)-1, CFG_KEY_APPEUI, cfg::appeui },
	{ Config_Type_Hex, sizeof(cfg::deveui)-1, CFG_KEY_DEVEUI, cfg::deveui },
	{ Config_Type_Hex, sizeof(cfg::appkey)-1, CFG_KEY_APPKEY, cfg::appkey },
	{ Config_Type_String, sizeof(cfg::current_lang)-1, CFG_KEY_CURRENT_LANG, cfg::current_lang },
	{ Config_Type_String, sizeof(cfg::wlanssid)-1, CFG_KEY_WLANSSID, cfg::wlanssid },
	{ Config_Type_Password, sizeof(cfg::wlanpwd)-1, CFG_KEY_WLANPWD, cfg::wlanpwd },
	{ Config_Type_String, sizeof(cfg::www_username)-1, CFG_KEY_WWW_USERNAME, cfg::www_username },
	{ Config_Type_Password, sizeof(cfg::www_password)-1, CFG_KEY_WWW_PASSWORD, cfg::www_password },
	{ Config_Type_String, sizeof(cfg::fs_ssid)-1, CFG_KEY_FS_SSID, cfg::fs_ssid },
	{ Config_Type_Password, sizeof(cfg::fs_pwd)-1, CFG_KEY_FS_PWD, cfg::fs_pwd },
	{ Config_Type_Bool, 0, CFG_KEY_WWW_BASICAUTH_ENABLED, &cfg::www_basicauth_enabled },
	{ Config_Type_Bool, 0, CFG_KEY_NPM_READ, &cfg::npm_read },
	{ Config_Type_Bool, 0, CFG_KEY_BMX280_READ, &cfg::bmx280_read },
	{ Config_Type_String, sizeof(cfg::height_above_sealevel)-1, CFG_KEY_HEIGHT_ABOVE_SEALEVEL, cfg::height_above_sealevel },
	{ Config_Type_Bool, 0, CFG_KEY_CCS811_READ, &cfg::ccs811_read },
	{ Config_Type_Bool, 0, CFG_KEY_ENVEANO2_READ, &cfg::enveano2_read },
	{ Config_Type_Bool, 0, CFG_KEY_SEND2DUSTI, &cfg::send2dusti },
	{ Config_Type_Bool, 0, CFG_KEY_SSL_DUSTI, &cfg::ssl_dusti },
	{ Config_Type_Bool, 0, CFG_KEY_SEND2MADAVI, &cfg::send2madavi },
	{ Config_Type_Bool, 0, CFG_KEY_SSL_MADAVI, &cfg::ssl_madavi },
	{ Config_Type_Bool, 0, CFG_KEY_SEND2CSV, &cfg::send2csv },
	{ Config_Type_Bool, 0, CFG_KEY_HAS_LED_VALUE, &cfg::has_led_value },
	{ Config_Type_UInt, 0, CFG_KEY_BRIGHTNESS, &cfg::brightness },
	{ Config_Type_UInt, 0, CFG_KEY_VALUE_DISPLAYED, &cfg::value_displayed },
	{ Config_Type_Bool, 0, CFG_KEY_RGPD, &cfg::rgpd },
	{ Config_Type_UInt, 0, CFG_KEY_DEBUG, &cfg::debug },
	{ Config_Type_Time, 0, CFG_KEY_SENDING_INTERVALL_MS_STATIC, &cfg::sending_intervall_ms_static },
	{ Config_Type_Time, 0, CFG_KEY_SENDING_INTERVALL_MS_MOBILE, &cfg::sending_intervall_ms_mobile },
	{ Config_Type_Time, 0, CFG_KEY_TIME_FOR_WIFI_CONFIG, &cfg::time_for_wifi_config },
	{ Config_Type_Bool, 0, CFG_KEY_SEND2CUSTOM, &cfg::send2custom },
	{ Config_Type_String, sizeof(cfg::host_custom)-1, CFG_KEY_HOST_CUSTOM, cfg::host_custom },
	{ Config_Type_String, sizeof(cfg::url_custom)-1, CFG_KEY_URL_CUSTOM, cfg::url_custom },
	{ Config_Type_UInt, 0, CFG_KEY_PORT_CUSTOM, &cfg::port_custom },
	{ Config_Type_String, sizeof(cfg::user_custom)-1, CFG_KEY_USER_CUSTOM, cfg::user_custom },
	{ Config_Type_Password, sizeof(cfg::pwd_custom)-1, CFG_KEY_PWD_CUSTOM, cfg::pwd_custom },
	{ Config_Type_Bool, 0, CFG_KEY_SSL_CUSTOM, &cfg::ssl_custom },
	{ Config_Type_Bool, 0, CFG_KEY_SEND2CUSTOM2, &cfg::send2custom2 },
	{ Config_Type_String, sizeof(cfg::host_custom2)-1, CFG_KEY_HOST_CUSTOM2, cfg::host_custom2 },
	{ Config_Type_String, sizeof(cfg::url_custom2)-1, CFG_KEY_URL_CUSTOM2, cfg::url_custom2 },
	{ Config_Type_UInt, 0, CFG_KEY_PORT_CUSTOM2, &cfg::port_custom2 },
	{ Config_Type_String, sizeof(cfg::user_custom2)-1, CFG_KEY_USER_CUSTOM2, cfg::user_custom2 },
	{ Config_Type_Password, sizeof(cfg::pwd_custom2)-1, CFG_KEY_PWD_CUSTOM2, cfg::pwd_custom2 },
	{ Config_Type_Bool, 0, CFG_KEY_SSL_CUSTOM2, &cfg::ssl_custom2 },
	{ Config_Type_Bool, 0, CFG_KEY_HAS_SDCARD, &cfg::has_sdcard },
	{ Config_Type_Bool, 0, CFG_KEY_DISPLAY_MEASURE, &cfg::display_measure },
	{ Config_Type_Bool, 0, CFG_KEY_DISPLAY_DEVICE_INFO, &cfg::display_device_info },
	{ Config_Type_Bool, 0, CFG_KEY_HAS_GPS, &cfg::has_gps },
	{ Config_Type_Bool, 0, CFG_KEY_HAS_SSD1306, &cfg::has_ssd1306 },
	{ Config_Type_Bool, 0, CFG_KEY_HAS_SH1106, &cfg::has_sh1106 },
	{ Config_Type_String, sizeof(cfg::host_nbiot_json)-1, CFG_KEY_HOST_NBIOT_JSON, cfg::host_nbiot_json },
	{ Config_Type_String, sizeof(cfg::url_nbiot_json)-1, CFG_KEY_URL_NBIOT_JSON, cfg::url_nbiot_json },
	{ Config_Type_UInt, 0, CFG_KEY_PORT_NBIOT_JSON, &cfg::port_nbiot_json },
	{ Config_Type_String, sizeof(cfg::user_nbiot_json)-1, CFG_KEY_USER_NBIOT_JSON, cfg::user_nbiot_json },
	{ Config_Type_Password, sizeof(cfg::pwd_nbiot_json)-1, CFG_KEY_PWD_NBIOT_JSON, cfg::pwd_nbiot_json },
	{ Config_Type_Bool, 0, CFG_KEY_SSL_NBIOT_JSON, &cfg::ssl_nbiot_json },
	{ Config_Type_String, sizeof(cfg::host_nbiot_byte)-1, CFG_KEY_HOST_NBIOT_BYTE, cfg::host_nbiot_byte },
	{ Config_Type_String, sizeof(cfg::url_nbiot_byte)-1, CFG_KEY_URL_NBIOT_BYTE, cfg::url_nbiot_byte },
	{ Config_Type_UInt, 0, CFG_KEY_PORT_NBIOT_BYTE, &cfg::port_nbiot_byte },
	{ Config_Type_String, sizeof(cfg::user_nbiot_byte)-1, CFG_KEY_USER_NBIOT_BYTE, cfg::user_nbiot_byte },
	{ Config_Type_Password, sizeof(cfg::pwd_nbiot_byte)-1, CFG_KEY_PWD_NBIOT_BYTE, cfg::pwd_nbiot_byte },
	{ Config_Type_Bool, 0, CFG_KEY_SSL_NBIOT_BYTE, &cfg::ssl_nbiot_byte },
};
