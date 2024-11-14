void setup() {
  Serial.begin(9600);
  Serial.println("Server is running...");
}

void loop() {
  if (Serial.available() > 0) {
    String message = Serial.readStringUntil('\n');
    message.trim();
    Serial.println("Received: " + message);

    // Модифікація повідомлення
    message.toUpperCase();
    message += " FROM SERVER";

    // Відправка зміненого повідомлення назад клієнту
    Serial.println(message);
    Serial.println("Sent: " + message);
    delay(5000);  // Затримка, щоб уникнути безперервного циклу
  }
}
