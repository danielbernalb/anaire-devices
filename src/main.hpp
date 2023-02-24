void Display_Init();
void Display_Splash_Screen();
void Get_AireCiudadano_DeviceId();
void Aireciudadano_Characteristics();
void Read_EEPROM();
void Print_Config();
void Button_Init();
void Connect_WiFi();
void Init_MQTT();
void Setup_Sensor();
void Update_Display();
void UpdateOLED();
void TimeConfig();
void FlashBluetoothTime();
void Read_Sensor();
void Evaluate_PM25_Value();
void Send_Message_Cloud_App_MQTT();
void MQTT_Reconnect();
void Init_MQTT();
void Check_WiFi_Server();
void Print_WiFi_Status();
void Print_WiFi_Status_ESP8266();
void Do_Calibrate_Sensor();
void Set_AutoSelfCalibration();
void Write_EEPROM();
void Start_Captive_Portal();
void Suspend_Device();
void Write_EEPROM();
void MQTT_Reconnect();
void Suspend_Device();
void Wipe_EEPROM();
void Firmware_Update();
void update_started();
void update_finished();
void update_progress(int cur, int total);
void update_error(int err);
void Set_Measurement_Interval();
void Write_Bluetooth();
void Write_SD();
void saveParamCallback();
void ErrtoMess(char *mess, uint8_t r);
void Errorloop(char *mess, uint8_t r);
void GetDeviceInfo();
void NotAvailableSPS30();
void printSerialNumber();
void printModuleVersions();
void ReadHyT();

void displayBatteryLevel(int colour);
void displayWifi(int colour_1, int colour_2, boolean active);
void displayBuzzer(int colour, boolean active);
void Receive_Message_Cloud_App_MQTT(char *topic, byte *payload, unsigned int length);
String getParam(String name);

void displayInit();
void showWelcome();
void welcomeAddMessage(String msg);
void AddMessage(String msg);
void displayCenterBig(String msg);
void displayBottomLine(String msg);
void displayEmoticonLabel(int numsmle, String msg);
void displayTextLevel(String msg);
void displayColorLevel(int cursor, String msg);
void displayAverage(int average);
void displaySensorAverage(int average);
void displaySensorData(int pm25, int humi, int temp, int rssi);
void displayLiveIcon();
void displayPrefSaveIcon(bool enable);
void updateError(unsigned int error);
void pageStart();
void pageEnd();