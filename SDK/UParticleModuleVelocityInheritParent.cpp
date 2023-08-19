#include "FRawDistributionVector.hpp"
#include "UParticleModuleVelocityBase.hpp"
#include "UParticleModuleVelocityInheritParent.hpp"
UParticleModuleVelocityInheritParent* UParticleModuleVelocityInheritParent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVelocityInheritParent");
    return (UParticleModuleVelocityInheritParent*)res;
}
