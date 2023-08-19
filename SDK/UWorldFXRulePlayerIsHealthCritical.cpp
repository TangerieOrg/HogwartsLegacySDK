#include "UWorldFXRulePlayerIsHealthCritical.hpp"
#include "UWorldFXRulePlayerState.hpp"
UWorldFXRulePlayerIsHealthCritical* UWorldFXRulePlayerIsHealthCritical::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerIsHealthCritical");
    return (UWorldFXRulePlayerIsHealthCritical*)res;
}
