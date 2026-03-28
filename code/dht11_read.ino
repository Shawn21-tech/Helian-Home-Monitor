// DHT11 Temperature & Humidity Reading
// Board: ESP32
// Pin: GPIO18
// Reads data from DHT11 sensor and prints to Serial Monitor

# include <DHT.h>
# define DHTPIN 18
# define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(115200);
  dht.begin();
}

void loop()
{
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature))
  {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("% ");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" degrees celsius");

  delay(2000);
}
