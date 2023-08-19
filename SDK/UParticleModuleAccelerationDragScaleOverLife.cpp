#include "FRawDistributionFloat.hpp"
#include "UDistributionFloat.hpp"
#include "UParticleModuleAccelerationBase.hpp"
#include "UParticleModuleAccelerationDragScaleOverLife.hpp"
UParticleModuleAccelerationDragScaleOverLife* UParticleModuleAccelerationDragScaleOverLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleAccelerationDragScaleOverLife");
    return (UParticleModuleAccelerationDragScaleOverLife*)res;
}
