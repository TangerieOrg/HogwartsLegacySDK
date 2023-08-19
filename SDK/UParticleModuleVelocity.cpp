#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleVelocity.hpp"
#include "UParticleModuleVelocityBase.hpp"
UParticleModuleVelocity* UParticleModuleVelocity::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVelocity");
    return (UParticleModuleVelocity*)res;
}
