#include "FActiveCameraShakeInfo.hpp"
#include "UCameraModifier.hpp"
#include "UCameraModifier_CameraShake.hpp"
UCameraModifier_CameraShake* UCameraModifier_CameraShake::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraModifier_CameraShake");
    return (UCameraModifier_CameraShake*)res;
}
