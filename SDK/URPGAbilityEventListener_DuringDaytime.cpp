#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_DuringDaytime.hpp"
URPGAbilityEventListener_DuringDaytime* URPGAbilityEventListener_DuringDaytime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_DuringDaytime");
    return (URPGAbilityEventListener_DuringDaytime*)res;
}
