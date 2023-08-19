#include "FRawDistributionFloat.hpp"
#include "FVector.hpp"
#include "UParticleModuleVelocityBase.hpp"
#include "UParticleModuleVelocityCone.hpp"
UParticleModuleVelocityCone* UParticleModuleVelocityCone::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVelocityCone");
    return (UParticleModuleVelocityCone*)res;
}
