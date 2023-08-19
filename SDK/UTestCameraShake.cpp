#include "UCameraShakeBase.hpp"
#include "UTestCameraShake.hpp"
UTestCameraShake* UTestCameraShake::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.TestCameraShake");
    return (UTestCameraShake*)res;
}
