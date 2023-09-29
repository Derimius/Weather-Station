// The Weather Station by Michael Chukwukere



#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN 2         // Pin connected to the DHT sensor
#define DHTTYPE DHT22    // DHT22 (AM2302) sensor is used

DHT dht(DHTPIN, DHTTYPE);
Adafruit_BMP280 bmp;
LiquidCrystal lcd(0);

void setup() {
  lcd.begin(16, 2);		// Sets up the 16x2 LCD screen
  dht.begin();			// Initializes the DHT22 sensor
  bmp.begin(0x77); 		// The BMP280 has two possible I2C addresses depending on how you have the SDO pin configured. If SDO is high then the I2C address is 0x77. If SDO is low the I2C address is 0x76. On the Adafruit BMP280 module the SDO pin is pulled high so if you leave it alone the address will be 0x77

  lcd.print("Weather Station"); // The LCD will display "Weather Station" as its opening text upon startup
  delay(2000);					// This sets the timer to display the "Weather Station" startup screen for 2 seconds before clearing				
  lcd.clear();					// This clears the startup after displaying the "Weather Station" text for 2 seconds
}

void loop() {
  float humidity = dht.readHumidity();			// This creates a variable called "Humidity" which gets its value from the humidity readings of the DHT22
  float temperature = dht.readTemperature();	// This creates a variable called "Temperature" which gets its value from the temperature readings of the DHT22 sensor
  float pressure = bmp.readPressure() / 100.0F; // This creates a variable called "Pressure" which gets its value from the readings of the BMP280, and divides it by 100

  lcd.setCursor(0, 0);					// Sets the cursor to display its data on the first column of the first row
  lcd.print("Temp: ");					// It will have "Temp" written on that column of the first row
  lcd.print(temperature);				// It will display the "Temperature" variable from the DHT22 right next to the "Temp:" text.
  lcd.print("C  Humidity: ");			// This is a trick for the eyes. The "C" here is the "Celsius" unit for the temeperature that has been displayed, and right after temperature is the Humidity text.
  lcd.print(humidity);					// This will display the "Humidity" variable from the DHT22 right next to the "Humidity" text.
  lcd.print("%");						// This will add the percentage ratio next to the humidity text.

  lcd.setCursor(0, 1);					// This sets the cursor to display its data on another line (ie. Second row) of the LCD screen. Remember the LCD is a 16x2 screen. That means it has 16 columns and 2 rows (lines). So, this code here is setting the data to display on that second line.
  lcd.print("Pressure: ");				// This will have "Pressure:" written on that first column of the second row. Remember, in digital electronics, we count 0, 1, 2, etc. So, when you see 0, it means first. And when you see 1, it means second.
  lcd.print(pressure);					// This will display the "Pressure" variable from the BMP280 sensor right next to the "Pressure: " text.
  lcd.print("hPa");						// This will attach the "hPa" unit right next to the pressure value.

  delay(5000); 							// This sets the station to update every 5 seconds
  lcd.clear();							// This refreshes the display and updates it based on the set time
}
