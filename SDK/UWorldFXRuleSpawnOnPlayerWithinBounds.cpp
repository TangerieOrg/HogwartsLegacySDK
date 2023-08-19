#include "FVector.hpp"
#include "UWorldFXRuleCameraPlayerAttached.hpp"
#include "UWorldFXRuleSpawnOnPlayerWithinBounds.hpp"
UWorldFXRuleSpawnOnPlayerWithinBounds* UWorldFXRuleSpawnOnPlayerWithinBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleSpawnOnPlayerWithinBounds");
    return (UWorldFXRuleSpawnOnPlayerWithinBounds*)res;
}
