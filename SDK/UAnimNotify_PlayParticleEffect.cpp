#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_PlayParticleEffect.hpp"
#include "UParticleSystem.hpp"
UAnimNotify_PlayParticleEffect* UAnimNotify_PlayParticleEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotify_PlayParticleEffect");
    return (UAnimNotify_PlayParticleEffect*)res;
}
