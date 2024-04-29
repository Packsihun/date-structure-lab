#pragma once
#include <iostream> // input output ����
#include <string> // ���ڿ� 
using namespace std; // �Ⱥ��̸� string �տ� std :: �ٿ�����, std ���̺귯�� namespasce ����

// SmartHome
class SmartHome {
private: // Ŭ���� ������ (class member variable, attribute, field �߿�)
    string owner; // ���ڿ�
    int temperature; // ������
    int humidity;
    bool security; // true or false
public: // Ŭ���� �Լ��� (member function, class method �߿�) // ������
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    } // ���� 4���� ��ü��, this�� ����Ʈ �ִ°���
    // Parameter, Argument
    SmartHome(string o, int t, int h, bool sec)
        : temperature(t), humidity(h), security(sec) {
        strcpy(owner, o); // ���� ���� ���� �μ���� �Ѵ�
    }
    // �Ҹ���
    ~SmartHome() {}
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) { // humidity �� parameter �� �Ű��������� �Ѵ�.
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    string getOwner() {
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {
        cout << "������: " << this->owner << endl;
        cout << "�µ�: " << this->temperature << "��" << endl;
        cout << "����: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};