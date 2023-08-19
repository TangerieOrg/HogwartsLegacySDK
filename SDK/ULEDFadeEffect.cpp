#include "FLEDFadeEffectProperty.hpp"
#include "ULEDFadeEffect.hpp"
#include "UObject.hpp"
ULEDFadeEffect* ULEDFadeEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.LEDFadeEffect");
    return (ULEDFadeEffect*)res;
}
