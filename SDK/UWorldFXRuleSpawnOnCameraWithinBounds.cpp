#include "FVector.hpp"
#include "UWorldFXRuleCameraPlayerAttached.hpp"
#include "UWorldFXRuleSpawnOnCameraWithinBounds.hpp"
UWorldFXRuleSpawnOnCameraWithinBounds* UWorldFXRuleSpawnOnCameraWithinBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleSpawnOnCameraWithinBounds");
    return (UWorldFXRuleSpawnOnCameraWithinBounds*)res;
}
