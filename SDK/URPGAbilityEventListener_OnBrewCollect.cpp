#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnBrewCollect.hpp"
URPGAbilityEventListener_OnBrewCollect* URPGAbilityEventListener_OnBrewCollect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnBrewCollect");
    return (URPGAbilityEventListener_OnBrewCollect*)res;
}
