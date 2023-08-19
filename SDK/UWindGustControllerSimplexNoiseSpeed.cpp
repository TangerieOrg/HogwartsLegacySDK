#include "EWindGustCurveRemap.hpp"
#include "EWindGustSpeedOp.hpp"
#include "FVector2D.hpp"
#include "UWindGustControllerSimplexNoise.hpp"
#include "UWindGustControllerSimplexNoiseSpeed.hpp"
UWindGustControllerSimplexNoiseSpeed* UWindGustControllerSimplexNoiseSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindGustControllerSimplexNoiseSpeed");
    return (UWindGustControllerSimplexNoiseSpeed*)res;
}
