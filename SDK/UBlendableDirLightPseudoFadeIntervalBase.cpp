#include "UBlendableDirLightPseudoFadeBase.hpp"
#include "UBlendableDirLightPseudoFadeIntervalBase.hpp"
UBlendableDirLightPseudoFadeIntervalBase* UBlendableDirLightPseudoFadeIntervalBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.BlendableDirLightPseudoFadeIntervalBase");
    return (UBlendableDirLightPseudoFadeIntervalBase*)res;
}
