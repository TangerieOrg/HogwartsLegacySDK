#include "UCameraShakePattern.hpp"
#include "UCompositeCameraShakePattern.hpp"
UCompositeCameraShakePattern* UCompositeCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.CompositeCameraShakePattern");
    return (UCompositeCameraShakePattern*)res;
}
