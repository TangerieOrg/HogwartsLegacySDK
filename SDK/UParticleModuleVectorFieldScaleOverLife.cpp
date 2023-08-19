#include "FRawDistributionFloat.hpp"
#include "UDistributionFloat.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
#include "UParticleModuleVectorFieldScaleOverLife.hpp"
UParticleModuleVectorFieldScaleOverLife* UParticleModuleVectorFieldScaleOverLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVectorFieldScaleOverLife");
    return (UParticleModuleVectorFieldScaleOverLife*)res;
}
