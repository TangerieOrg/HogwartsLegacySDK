#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_InStealth.hpp"
URPGAbilityEventListener_InStealth* URPGAbilityEventListener_InStealth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_InStealth");
    return (URPGAbilityEventListener_InStealth*)res;
}
