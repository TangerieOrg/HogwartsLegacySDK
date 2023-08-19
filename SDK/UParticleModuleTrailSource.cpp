#include "EParticleSourceSelectionMethod.hpp"
#include "ETrail2SourceMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "FVector.hpp"
#include "UParticleModuleTrailBase.hpp"
#include "UParticleModuleTrailSource.hpp"
UParticleModuleTrailSource* UParticleModuleTrailSource::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleTrailSource");
    return (UParticleModuleTrailSource*)res;
}
