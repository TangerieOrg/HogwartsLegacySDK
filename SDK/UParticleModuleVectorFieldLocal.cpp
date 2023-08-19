#include "FRotator.hpp"
#include "FVector.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
#include "UParticleModuleVectorFieldLocal.hpp"
#include "UVectorField.hpp"
UParticleModuleVectorFieldLocal* UParticleModuleVectorFieldLocal::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVectorFieldLocal");
    return (UParticleModuleVectorFieldLocal*)res;
}
