#include "UParticleModuleTypeDataAnimTrail.hpp"
#include "UParticleModuleTypeDataBase.hpp"
UParticleModuleTypeDataAnimTrail* UParticleModuleTypeDataAnimTrail::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleTypeDataAnimTrail");
    return (UParticleModuleTypeDataAnimTrail*)res;
}
