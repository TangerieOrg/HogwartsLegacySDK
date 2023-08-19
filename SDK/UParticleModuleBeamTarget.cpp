#include "Beam2SourceTargetMethod.hpp"
#include "Beam2SourceTargetTangentMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#include "UParticleModuleBeamTarget.hpp"
UParticleModuleBeamTarget* UParticleModuleBeamTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleBeamTarget");
    return (UParticleModuleBeamTarget*)res;
}
