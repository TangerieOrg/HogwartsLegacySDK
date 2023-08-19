#include "FRawDistributionFloat.hpp"
#include "UDistributionFloat.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
#include "UParticleModuleVectorFieldScale.hpp"
UParticleModuleVectorFieldScale* UParticleModuleVectorFieldScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVectorFieldScale");
    return (UParticleModuleVectorFieldScale*)res;
}
