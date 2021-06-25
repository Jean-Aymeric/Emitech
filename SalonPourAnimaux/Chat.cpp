#include "Chat.h"

Chat::Chat(std::string nom) : Animal(nom) {}

void Chat::parlerExtended() {
    std::cout << " : " << "Miaou\n";
}
