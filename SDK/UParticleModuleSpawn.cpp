#include "EParticleBurstMethod.hpp"
#include "FParticleBurst.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleSpawn.hpp"
#include "UParticleModuleSpawnBase.hpp"
UParticleModuleSpawn* UParticleModuleSpawn::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSpawn");
    return (UParticleModuleSpawn*)res;
}
