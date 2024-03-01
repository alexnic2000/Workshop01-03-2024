#include "Adafruit_Arcada.h"

Adafruit_Arcada arcada;

#define NUM_SELECTIONS 4
const char *selection[NUM_SELECTIONS] = {"Joc de cuvinte ", "Recunoaste numar", "Masurare ritm cardiac","Joc orientare"};

void setup() {
  //while (!Serial) delay(10);

  Serial.println("Hello! Arcada Menu test");
  if (!arcada.arcadaBegin()) {
    Serial.print("Failed to begin");
    while (1);
  }
  arcada.displayBegin();
  Serial.println("Arcada display begin");
  arcada.setBacklight(255);
}


void loop() {
    arcada.display->fillScreen(ARCADA_GREEN);
     //arcada.display->setCursor(50, 50);
   // arcada.display->setTextSize(6);
    //arcada.display->print(6);
  uint8_t selected = arcada.menu(selection, NUM_SELECTIONS, ARCADA_WHITE, ARCADA_BLACK);

  char message[80];
  sprintf(message, "Selected '%s'", selection[selected]);

if (selected==0)
{
arcada.display->fillScreen(ARCADA_BLUE);
delay(3000);

}
if (selected==1)
{
arcada.display->fillScreen(ARCADA_BLUE);
delay(3000);

}
if (selected==2)
{
arcada.display->fillScreen(ARCADA_BLUE);
delay(3000);

}
if (selected==3)
{
arcada.display->fillScreen(ARCADA_BLUE);
delay(3000);

}
}


/*****************************************************************/
