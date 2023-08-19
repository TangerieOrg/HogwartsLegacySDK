#include "FDirLightPseudoFadeCustomBlendableInterval.hpp"
#include "UBlendableDirLightPseudoFadeCustomBlendableInterval.hpp"
#include "UBlendableDirLightPseudoFadeIntervalBase.hpp"
UBlendableDirLightPseudoFadeCustomBlendableInterval* UBlendableDirLightPseudoFadeCustomBlendableInterval::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.BlendableDirLightPseudoFadeCustomBlendableInterval");
    return (UBlendableDirLightPseudoFadeCustomBlendableInterval*)res;
}
