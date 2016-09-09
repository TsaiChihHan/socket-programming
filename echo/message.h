#pragma once

using namespace std;

class Message {
public:
    Message();
    ~Message();

    bool needed();

    string getCommand();
    string getName();
    int getLength();
    string getValue();

private:
    string command;
    string name;
    int length;
    string value;
}
