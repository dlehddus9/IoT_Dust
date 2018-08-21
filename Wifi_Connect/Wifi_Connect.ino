#include <ESP8266WiFi.h>
#include <SocketIOClient.h>

const char* ssid     = "공유기 아이디";
const char* password = "공유기 비밀번호";
String host = "cafe24 호스팅 받은 서버 주소";
int port = 3000;
int value = 0;

SocketIOClient socket;

void setup() {
  Serial.begin(115200);
  delay(10);

  // We start by connecting to a WiFi network
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  socket.connect(host, port);
}

  void loop() 
  {
    delay(1000);
    Serial.print("connecting to ");
    Serial.println(host);
  }
