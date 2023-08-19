#include "ELocationEmitterSelectionMethod.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationEmitter.hpp"
UParticleModuleLocationEmitter* UParticleModuleLocationEmitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationEmitter");
    return (UParticleModuleLocationEmitter*)res;
}
