# Arduino-Based Weather Station

![Demo](https://i.postimg.cc/J4K2L0W1/Screenshot-2017-10-22-12-15-21-1-1024x576.png)

## Overview
This project, developed by [Michael Chukwukere](https://www.linkedin.com/in/chxxvo), is an Arduino-based weather station that measures and displays temperature, humidity, and atmospheric pressure data on a 16x2 LCD screen. It combines the data from a DHT22 humidity and temperature sensor with a BMP280 barometric pressure sensor to provide real-time weather information.

## Table of Contents
- [Components](#components)
- [Technical Details](#technical-details)
- [Wiring](#wiring)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Components
To build this weather station, you will need the following components:
- Arduino board (e.g., Arduino Uno)
- DHT22 humidity and temperature sensor
- BMP280 barometric pressure sensor
- 16x2 LCD display (which is compatible with the HD44780 controller)
- Breadboard and jumper wires

## Technical Details
This weather station collects data from two sensors:
- **DHT22 Sensor:** Provides temperature and humidity data using a one-wire protocol.
- **BMP280 Sensor:** Measures atmospheric pressure, which can be used to estimate altitude and track weather changes.

The collected data is displayed on a 16x2 LCD screen using the HD44780 controller.

## Wiring
Ensure your components are wired as follows:
- Connect the DHT22 sensor to the Arduino for temperature and humidity readings.
- Connect the BMP280 sensor to the Arduino for pressure readings.
- Connect the LCD display to the Arduino according to your wiring setup.

## Installation
1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/Derimius/Weather-Station.git

1. Open the Arduino IDE and upload the WeatherStation.ino sketch to your Arduino board.

## Usage
1. Upload the sketch to your Arduino board.
2. Power on the system.
3. The LCD display will show real-time weather data, including temperature in Celsius, humidity percentage, and atmospheric pressure in hectopascals (hPa).
4. The data is updated every 5 seconds.
Please, feel free to customize the project, add additional sensors, or enhance it as needed to suit your weather monitoring needs.

## License 
This project is licensed under the MIT License - see the LICENSE file for details.