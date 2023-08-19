#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayParticleEffectTaskScratchPad.hpp"
UAblPlayParticleEffectTaskScratchPad* UAblPlayParticleEffectTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlayParticleEffectTaskScratchPad");
    return (UAblPlayParticleEffectTaskScratchPad*)res;
}
