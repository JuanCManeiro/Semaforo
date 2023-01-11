# Semaforo
Preparacion de codigo para semaforo en protoboard 
// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
}
/**primeira parte do semaforo caseiro
*/
