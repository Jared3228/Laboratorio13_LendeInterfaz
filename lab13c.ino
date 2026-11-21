// Lab 13c: Carrera de LEDs (C puro)
void setup() {
  DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2) | (1 << PB3); // PB0-PB3 salidas
}
void loop() {
  for (uint8_t i = 0; i < 4; i++) {
    uint8_t valor = (1 << i);
    asm volatile ("out %0, %1" : : "I" (0x05), "r" (valor));
    delay(200);
  }
}
