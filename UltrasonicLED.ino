int trig = 3;           // membuat varibel trig yang di set ke-pin 3
int echo = 2;           // membuat variabel echo yang di set ke-pin 2
long durasi, jarak;     // membuat variabel durasi dan jarak

void setup() {

  pinMode(trig, OUTPUT);   // set pin trig menjadi OUTPUT
  pinMode(echo, INPUT);    // set pin echo menjadi INPUT
  pinMode(5, OUTPUT);      //Deklarasi PIN 5 menjadi output
  pinMode(6, OUTPUT);      //Deklarasi PIN 6 menjadi output
  pinMode(7, OUTPUT);      //Deklarasi PIN 7 menjadi output
  Serial.begin(9600);      // digunakan untuk komunikasi Serial dengan komputer

}

void loop() {

  // program dibawah ini agar trigger memancarakan suara ultrasonic
  digitalWrite(trig, LOW);
  delayMicroseconds(8);
  digitalWrite(trig, HIGH);
  delayMicroseconds(8);
  digitalWrite(trig, LOW);
  delayMicroseconds(8);

  durasi = pulseIn(echo, HIGH); // menerima suara ultrasonic
  jarak = (durasi / 2) / 29.1;  // mengubah durasi menjadi jarak (cm)
  if (jarak < 10) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    Serial.println("lampu 1");
  } else if (jarak < 20) {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    Serial.println("lampu 2");
  } else if (jarak < 30) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    Serial.println("lampu 3");
  } else {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
  Serial.println(jarak);        // menampilkan jarak pada Serial Monitor
}
