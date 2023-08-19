#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnMessage.hpp"
URPGAbilityEventListener_OnMessage* URPGAbilityEventListener_OnMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnMessage");
    return (URPGAbilityEventListener_OnMessage*)res;
}
