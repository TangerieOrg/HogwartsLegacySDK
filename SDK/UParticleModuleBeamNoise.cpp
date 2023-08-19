#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#include "UParticleModuleBeamNoise.hpp"
UParticleModuleBeamNoise* UParticleModuleBeamNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleBeamNoise");
    return (UParticleModuleBeamNoise*)res;
}
