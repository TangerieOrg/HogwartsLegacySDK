#include "UWorldFXRuleIsNight.hpp"
#include "UWorldFXRuleNightDay.hpp"
UWorldFXRuleIsNight* UWorldFXRuleIsNight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleIsNight");
    return (UWorldFXRuleIsNight*)res;
}
