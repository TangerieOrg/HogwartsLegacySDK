#include "UWorldFXRuleCameraPlayerAttached.hpp"
#include "UWorldFXRuleSpawnOnPlayerWithinDistance.hpp"
UWorldFXRuleSpawnOnPlayerWithinDistance* UWorldFXRuleSpawnOnPlayerWithinDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleSpawnOnPlayerWithinDistance");
    return (UWorldFXRuleSpawnOnPlayerWithinDistance*)res;
}
