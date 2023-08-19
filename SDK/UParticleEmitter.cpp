#include "EEmitterRenderMode.hpp"
#include "EParticleSignificanceLevel.hpp"
#include "UObject.hpp"
#include "UParticleEmitter.hpp"
#include "UParticleLODLevel.hpp"
UParticleEmitter* UParticleEmitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleEmitter");
    return (UParticleEmitter*)res;
}
