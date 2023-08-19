#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_SharedTimedParticleEffect.hpp"
UAnimNotifyState_SharedTimedParticleEffect* UAnimNotifyState_SharedTimedParticleEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotifyState_SharedTimedParticleEffect");
    return (UAnimNotifyState_SharedTimedParticleEffect*)res;
}
