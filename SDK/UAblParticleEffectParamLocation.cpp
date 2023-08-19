#include "FAblAbilityTargetTypeLocation.hpp"
#include "UAblParticleEffectParam.hpp"
#include "UAblParticleEffectParamLocation.hpp"
UAblParticleEffectParamLocation* UAblParticleEffectParamLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblParticleEffectParamLocation");
    return (UAblParticleEffectParamLocation*)res;
}
