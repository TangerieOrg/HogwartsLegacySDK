#include "UAblParticleEffectParam.hpp"
#include "UObject.hpp"
UAblParticleEffectParam* UAblParticleEffectParam::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblParticleEffectParam");
    return (UAblParticleEffectParam*)res;
}
