#include "UCameraShakePattern.hpp"
#include "USimpleCameraShakePattern.hpp"
USimpleCameraShakePattern* USimpleCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.SimpleCameraShakePattern");
    return (USimpleCameraShakePattern*)res;
}
