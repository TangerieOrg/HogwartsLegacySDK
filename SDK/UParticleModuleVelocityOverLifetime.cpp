#include "FRawDistributionVector.hpp"
#include "UParticleModuleVelocityBase.hpp"
#include "UParticleModuleVelocityOverLifetime.hpp"
UParticleModuleVelocityOverLifetime* UParticleModuleVelocityOverLifetime::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVelocityOverLifetime");
    return (UParticleModuleVelocityOverLifetime*)res;
}
