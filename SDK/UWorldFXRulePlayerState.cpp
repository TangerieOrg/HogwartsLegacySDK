#include "UWorldFXRule.hpp"
#include "UWorldFXRulePlayerState.hpp"
UWorldFXRulePlayerState* UWorldFXRulePlayerState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerState");
    return (UWorldFXRulePlayerState*)res;
}
