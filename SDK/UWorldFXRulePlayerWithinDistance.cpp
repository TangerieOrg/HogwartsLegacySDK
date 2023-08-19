#include "UWorldFXRuleCameraPlayer.hpp"
#include "UWorldFXRulePlayerWithinDistance.hpp"
UWorldFXRulePlayerWithinDistance* UWorldFXRulePlayerWithinDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerWithinDistance");
    return (UWorldFXRulePlayerWithinDistance*)res;
}
