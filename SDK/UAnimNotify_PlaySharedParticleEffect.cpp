#include "UAnimNotify.hpp"
#include "UAnimNotify_PlaySharedParticleEffect.hpp"
UAnimNotify_PlaySharedParticleEffect* UAnimNotify_PlaySharedParticleEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_PlaySharedParticleEffect");
    return (UAnimNotify_PlaySharedParticleEffect*)res;
}
