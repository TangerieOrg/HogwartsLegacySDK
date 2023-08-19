#include "UWorldFXRulePlayerIsHealthZero.hpp"
#include "UWorldFXRulePlayerState.hpp"
UWorldFXRulePlayerIsHealthZero* UWorldFXRulePlayerIsHealthZero::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerIsHealthZero");
    return (UWorldFXRulePlayerIsHealthZero*)res;
}
