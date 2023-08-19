#include "UParticleModule.hpp"
#include "UParticleModuleParameterBase.hpp"
UParticleModuleParameterBase* UParticleModuleParameterBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleParameterBase");
    return (UParticleModuleParameterBase*)res;
}
