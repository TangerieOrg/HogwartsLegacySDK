#include "UCameraShakePattern.hpp"
#include "UMatineeCameraShakePattern.hpp"
UMatineeCameraShakePattern* UMatineeCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.MatineeCameraShakePattern");
    return (UMatineeCameraShakePattern*)res;
}
