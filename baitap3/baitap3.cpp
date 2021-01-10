// baitap3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    /*
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
    void nhandl(char* tp, byte * nd, unsigned int length)
    {
        String topic(tp);
        String noidung = String((char*)nd);
        noidung.remove(length);

        Serial.println(topic);
        Serial.println(noidung);

        if (topic == "ESPn/RLA")
        {
            if (noidung == "1")
                digitalWrite(D1, LOW);
            if (noidung == "0")
                digitalWrite(D1, HIGH);
        }

        if (topic == "ESPn/RLB")
        {
            if (noidung == "1")
                digitalWrite(D2, LOW);
            if (noidung == "0")
                digitalWrite(D2, HIGH);
        }

        if (topic == "ESPn/RLC")
        {
            if (noidung == "1")
                digitalWrite(D3, LOW);
            if (noidung == "0")
                digitalWrite(D3, HIGH);
        }

        if (topic == "ESPn/RLD")
        {
            if (noidung == "1")
                digitalWrite(D4, LOW);
            if (noidung == "0")
                digitalWrite(D4, HIGH);
        }
    }
    WiFiClient c;
    PubSubClient MQTT("m16.cloudmqtt.com", 12393, nhandl, c);
    void setup() {
        Serial.begin(9600);
        WiFi.begin("Chuong", "0763999921");
        while (1)
        {
            delay(100);
            if (WiFi.status() == WL_CONNECTED)
                break;
        }
        Serial.println("Da vao duoc internet");
        while (1)
        {
            delay(500);
            if (MQTT.connect("IOTTEST", "rfvebybg", "FyWXCNdzHo3F"))
                break;
        }
        Serial.println("Da vao duoc MQTT");
        MQTT.publish("test", "gui du lieu thu");
        MQTT.subscribe("ESPn/RLA");
        MQTT.subscribe("ESPn/RLB");
        MQTT.subscribe("ESPn/RLC");
        MQTT.subscribe("ESPn/RLD");

        pinMode(D1, OUTPUT);
        pinMode(D2, OUTPUT);
        pinMode(D3, OUTPUT);
        pinMode(D4, OUTPUT);

        digitalWrite(D1, HIGH);
        digitalWrite(D2, HIGH);
        digitalWrite(D3, HIGH);
        digitalWrite(D4, HIGH);

    }

    void loop()
    {
        MQTT.loop();
        MQTT.publish("ESPg/RLA", String(!digitalRead(D1)).c_str());
        MQTT.publish("ESPg/RLB", String(!digitalRead(D2)).c_str());
        MQTT.publish("ESPg/RLC", String(!digitalRead(D3)).c_str());
        MQTT.publish("ESPg/RLD", String(!digitalRead(D4)).c_str());
    }
*/
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
