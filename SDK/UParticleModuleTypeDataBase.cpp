#include "UParticleModule.hpp"
#include "UParticleModuleTypeDataBase.hpp"
UParticleModuleTypeDataBase* UParticleModuleTypeDataBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleTypeDataBase");
    return (UParticleModuleTypeDataBase*)res;
}
