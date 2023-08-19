#include "UCameraShakeBase.hpp"
#include "UDefaultCameraShakeBase.hpp"
UDefaultCameraShakeBase* UDefaultCameraShakeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.DefaultCameraShakeBase");
    return (UDefaultCameraShakeBase*)res;
}
