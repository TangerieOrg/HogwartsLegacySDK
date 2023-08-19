#include "EBeam2Method.hpp"
#include "EBeamTaperMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleTypeDataBase.hpp"
#include "UParticleModuleTypeDataBeam2.hpp"
UParticleModuleTypeDataBeam2* UParticleModuleTypeDataBeam2::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleTypeDataBeam2");
    return (UParticleModuleTypeDataBeam2*)res;
}
