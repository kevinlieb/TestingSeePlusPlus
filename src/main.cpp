#include <Arduino.h>
#include <DamnSeeFile.hpp>


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DamnSeeFile damnSeeFile;

  damnSeeFile.damnSeeFile();
  damnSeeFile.canWeSee(1);
}

