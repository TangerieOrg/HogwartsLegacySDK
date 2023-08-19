#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleSourceMovement.hpp"
UParticleModuleSourceMovement* UParticleModuleSourceMovement::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSourceMovement");
    return (UParticleModuleSourceMovement*)res;
}
