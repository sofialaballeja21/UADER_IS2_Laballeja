// la función setup se ejecuta una vez cuando presionas reset o enciendes la placa
void setup() {
  // inicializa el pin digital LED_BUILTIN como una salida.
  pinMode(LED_BUILTIN, OUTPUT);
}

// la función hace parpadear el LED un número determinado de veces
void ciclo(int tiempo, int repeticiones) {
  for (int i = 0; i < repeticiones; i++) {
    digitalWrite(LED_BUILTIN, HIGH);    // enciende el LED
    delay(tiempo);                      // espera el tiempo pasado por parametro
    digitalWrite(LED_BUILTIN, LOW);     // apaga el LED
    delay(tiempo);                      // espera el tiempo pasado por parametro
  }
}

// la función loop se ejecuta una y otra vez para siempre
void loop() {
  // A
  ciclo(400, 3);    // espera 400 milisegundos y se repite el ciclo 3 veces
  
  // B
  delay(1200);      // espera 1200 milisegundos
  
  // C
  ciclo(1200, 3);   // espera 1200 milisegundos y se repite el ciclo 3 veces

  // D
  delay(1200);      // espera 1200 milisegundos
  
  // E
  ciclo(400, 3);    // espera 400 milisegundos y se repite el ciclo 3 veces

  // F
  delay(3600);      // espera 3600 milisegundos
}
