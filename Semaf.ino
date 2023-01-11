# Semaforo
Preparacion de codigo para semaforo en protoboard 
// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);// led integrado en modo pull-up
  /* resto de leds en modo pull-down*/
  pinMode(12, OUTPUT);//rojo
  pinMode(11, OUTPUT);//naranja
  pinMode(10, OUTPUT);//verde
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
// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  Serial.println("hello world");
}

void loop()
{
  Serial.println("reinicio");
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
}//actualizado 
