#include "EWindGustCurveRemap.hpp"
#include "FVector2D.hpp"
#include "UWindGustControllerSimplexNoise.hpp"
#include "UWindGustControllerSimplexNoiseDirection.hpp"
UWindGustControllerSimplexNoiseDirection* UWindGustControllerSimplexNoiseDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindGustControllerSimplexNoiseDirection");
    return (UWindGustControllerSimplexNoiseDirection*)res;
}
