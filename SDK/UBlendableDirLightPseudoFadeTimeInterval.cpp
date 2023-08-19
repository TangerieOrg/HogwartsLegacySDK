#include "FDirLightPseudoFadeTimeInterval.hpp"
#include "UBlendableDirLightPseudoFadeIntervalBase.hpp"
#include "UBlendableDirLightPseudoFadeTimeInterval.hpp"
UBlendableDirLightPseudoFadeTimeInterval* UBlendableDirLightPseudoFadeTimeInterval::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.BlendableDirLightPseudoFadeTimeInterval");
    return (UBlendableDirLightPseudoFadeTimeInterval*)res;
}
