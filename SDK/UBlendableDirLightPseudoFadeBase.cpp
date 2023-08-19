#include "EDayNightTweakDirectionalLightMode.hpp"
#include "UBlendableDirLightPseudoFadeBase.hpp"
#include "UGlobalLightingBlendable.hpp"
UBlendableDirLightPseudoFadeBase* UBlendableDirLightPseudoFadeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.BlendableDirLightPseudoFadeBase");
    return (UBlendableDirLightPseudoFadeBase*)res;
}
