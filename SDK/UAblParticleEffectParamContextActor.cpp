#include "EAblAbilityTargetType.hpp"
#include "UAblParticleEffectParam.hpp"
#include "UAblParticleEffectParamContextActor.hpp"
UAblParticleEffectParamContextActor* UAblParticleEffectParamContextActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblParticleEffectParamContextActor");
    return (UAblParticleEffectParamContextActor*)res;
}
