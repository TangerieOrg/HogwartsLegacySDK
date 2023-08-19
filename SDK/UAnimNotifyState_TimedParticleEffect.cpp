#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_TimedParticleEffect.hpp"
#include "UParticleSystem.hpp"
UAnimNotifyState_TimedParticleEffect* UAnimNotifyState_TimedParticleEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotifyState_TimedParticleEffect");
    return (UAnimNotifyState_TimedParticleEffect*)res;
}
