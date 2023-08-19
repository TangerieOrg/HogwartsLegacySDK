#include "FPerlinNoiseShaker.hpp"
#include "UPerlinNoiseCameraShakePattern.hpp"
#include "USimpleCameraShakePattern.hpp"
UPerlinNoiseCameraShakePattern* UPerlinNoiseCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern");
    return (UPerlinNoiseCameraShakePattern*)res;
}
