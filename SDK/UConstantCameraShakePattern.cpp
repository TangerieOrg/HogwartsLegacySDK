#include "FRotator.hpp"
#include "FVector.hpp"
#include "UConstantCameraShakePattern.hpp"
#include "USimpleCameraShakePattern.hpp"
UConstantCameraShakePattern* UConstantCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.ConstantCameraShakePattern");
    return (UConstantCameraShakePattern*)res;
}
