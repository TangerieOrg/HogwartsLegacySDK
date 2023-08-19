#include "FVector.hpp"
#include "UWorldFXRuleCameraPlayer.hpp"
#include "UWorldFXRulePlayerWithinBounds.hpp"
UWorldFXRulePlayerWithinBounds* UWorldFXRulePlayerWithinBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerWithinBounds");
    return (UWorldFXRulePlayerWithinBounds*)res;
}
