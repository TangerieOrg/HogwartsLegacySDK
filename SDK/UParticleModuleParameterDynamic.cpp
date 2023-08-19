#include "FEmitterDynamicParameter.hpp"
#include "UParticleModuleParameterBase.hpp"
#include "UParticleModuleParameterDynamic.hpp"
UParticleModuleParameterDynamic* UParticleModuleParameterDynamic::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleParameterDynamic");
    return (UParticleModuleParameterDynamic*)res;
}
