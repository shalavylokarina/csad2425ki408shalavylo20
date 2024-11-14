void setup() {
  Serial.begin(9600);
  Serial.println("Client is running...");
}

void loop() {
  // Відправка повідомлення серверу
  String message = "Hello, Server!";
  Serial.println(message);  // Відправка повідомлення серверу
  Serial.println("Sent: " + message);  // Діагностика

  // Чекання на відповідь від сервера
  delay(5000);  // Затримка в 5 секунд перед наступним відправленням
  if (Serial.available() > 0) {
    String response = Serial.readStringUntil('\n');
    response.trim();
    Serial.println("Received from server: " + response);
  }
}