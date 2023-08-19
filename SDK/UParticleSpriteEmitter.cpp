#include "UParticleEmitter.hpp"
#include "UParticleSpriteEmitter.hpp"
UParticleSpriteEmitter* UParticleSpriteEmitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleSpriteEmitter");
    return (UParticleSpriteEmitter*)res;
}
