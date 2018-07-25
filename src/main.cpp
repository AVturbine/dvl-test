#include <Arduino.h>
#include "dvl/dvl.h"
#include "dvl/io_dvl.h"

void setup() {
  Serial.begin(9600);
  pinMode(19, INPUT);  
  digitalWrite(19, HIGH);
  io_dvl_init(dvl_receive_handler);
  io_dvl_recv_begin();
  delay(5000);
  dvl_set_data_format();
  dvl_begin_pinging();
}
bool first_time = true;
void loop() {
   int upd = dvl_data_update();
   delay(1000);
   Serial.print("Pings: ");
   Serial.println(upd);
   Serial.print("Forward vel (0.1mm/s): ");
   Serial.println(dvl_get_range_to_bottom());
}

