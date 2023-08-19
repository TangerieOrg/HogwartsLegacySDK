#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotationBase.hpp"
#include "UParticleModuleRotationOverLifetime.hpp"
UParticleModuleRotationOverLifetime* UParticleModuleRotationOverLifetime::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotationOverLifetime");
    return (UParticleModuleRotationOverLifetime*)res;
}
