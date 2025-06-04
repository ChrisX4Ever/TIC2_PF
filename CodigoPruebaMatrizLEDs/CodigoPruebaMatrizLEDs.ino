#include <Adafruit_NeoPixel.h>

#define PIN 6         // Pin de datos IN conectado a Arduino
#define NUMPIXELS 64  // Total de LEDs (8x8)

Adafruit_NeoPixel matriz(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  matriz.begin();
  matriz.show();  // Apaga todos los LEDs
}

void loop() {
  // Fase 1: encender todos en rojo
  for (int i = 0; i < NUMPIXELS; i++) {
    matriz.setPixelColor(i, matriz.Color(255, 0, 0)); // Rojo
  }
  matriz.show();
  delay(1000);

  // Fase 2: cambiar a verde
  for (int i = 0; i < NUMPIXELS; i++) {
    matriz.setPixelColor(i, matriz.Color(0, 255, 0)); // Verde
  }
  matriz.show();
  delay(1000);

  // Fase 3: cambiar a azul
  for (int i = 0; i < NUMPIXELS; i++) {
    matriz.setPixelColor(i, matriz.Color(0, 0, 255)); // Azul
  }
  matriz.show();
  delay(1000);

  // Fase 4: apagar todos
  for (int i = 0; i < NUMPIXELS; i++) {
    matriz.setPixelColor(i, 0); // Apagar
  }
  matriz.show();
  delay(1000);
}