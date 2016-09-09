#include "message.h"

Message::Message() {

}

Message::~Message() {
}

bool
Message::needed() {
  if (value.length() == length) {
    return false
  }
  else {
    return true;
  }
}

string
Message::getCommand() {
  return this.command;
}

void
Message::setCommand(string str) {
  this.command = str;
}

string
Message::getName() {
  return this.name;
}

void
Message::setName(string name) {
  this.name = name;
}

int
Message::getLength() {
  return this.length;
}

void
Message::setLength(int length) {
  this.length = length;
}

string
Message::getValue() {
  return this.value;
}

void
Message::setValue(string value) {
  this.value = value;
}
