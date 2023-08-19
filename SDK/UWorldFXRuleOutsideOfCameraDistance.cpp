#include "UWorldFXRuleCameraPlayer.hpp"
#include "UWorldFXRuleOutsideOfCameraDistance.hpp"
UWorldFXRuleOutsideOfCameraDistance* UWorldFXRuleOutsideOfCameraDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleOutsideOfCameraDistance");
    return (UWorldFXRuleOutsideOfCameraDistance*)res;
}
