#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnHarvest.hpp"
URPGAbilityEventListener_OnHarvest* URPGAbilityEventListener_OnHarvest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnHarvest");
    return (URPGAbilityEventListener_OnHarvest*)res;
}
