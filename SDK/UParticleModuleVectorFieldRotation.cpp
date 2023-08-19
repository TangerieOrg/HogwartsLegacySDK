#include "FVector.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
#include "UParticleModuleVectorFieldRotation.hpp"
UParticleModuleVectorFieldRotation* UParticleModuleVectorFieldRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVectorFieldRotation");
    return (UParticleModuleVectorFieldRotation*)res;
}
