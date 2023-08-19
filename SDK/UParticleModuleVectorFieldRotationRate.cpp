#include "FVector.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
#include "UParticleModuleVectorFieldRotationRate.hpp"
UParticleModuleVectorFieldRotationRate* UParticleModuleVectorFieldRotationRate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVectorFieldRotationRate");
    return (UParticleModuleVectorFieldRotationRate*)res;
}
