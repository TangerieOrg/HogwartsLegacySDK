#include "FRawDistributionFloat.hpp"
#include "UParticleModuleLifetime.hpp"
#include "UParticleModuleLifetimeBase.hpp"
UParticleModuleLifetime* UParticleModuleLifetime::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLifetime");
    return (UParticleModuleLifetime*)res;
}
