#include "BeamModifierType.hpp"
#include "FBeamModifierOptions.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#include "UParticleModuleBeamModifier.hpp"
UParticleModuleBeamModifier* UParticleModuleBeamModifier::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleBeamModifier");
    return (UParticleModuleBeamModifier*)res;
}
