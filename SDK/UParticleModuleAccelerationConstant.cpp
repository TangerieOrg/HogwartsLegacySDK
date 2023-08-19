#include "FVector.hpp"
#include "UParticleModuleAccelerationBase.hpp"
#include "UParticleModuleAccelerationConstant.hpp"
UParticleModuleAccelerationConstant* UParticleModuleAccelerationConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleAccelerationConstant");
    return (UParticleModuleAccelerationConstant*)res;
}
