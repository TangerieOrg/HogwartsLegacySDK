#include "UWorldFXRuleCameraPlayerAttached.hpp"
#include "UWorldFXRuleSpawnOnCameraWithinDistance.hpp"
UWorldFXRuleSpawnOnCameraWithinDistance* UWorldFXRuleSpawnOnCameraWithinDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleSpawnOnCameraWithinDistance");
    return (UWorldFXRuleSpawnOnCameraWithinDistance*)res;
}
