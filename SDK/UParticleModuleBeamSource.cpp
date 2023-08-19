#include "Beam2SourceTargetMethod.hpp"
#include "Beam2SourceTargetTangentMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#include "UParticleModuleBeamSource.hpp"
UParticleModuleBeamSource* UParticleModuleBeamSource::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleBeamSource");
    return (UParticleModuleBeamSource*)res;
}
