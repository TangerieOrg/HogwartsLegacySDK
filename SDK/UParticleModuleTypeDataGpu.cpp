#include "FGPUSpriteEmitterInfo.hpp"
#include "FGPUSpriteResourceData.hpp"
#include "UParticleModuleTypeDataBase.hpp"
#include "UParticleModuleTypeDataGpu.hpp"
UParticleModuleTypeDataGpu* UParticleModuleTypeDataGpu::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleTypeDataGpu");
    return (UParticleModuleTypeDataGpu*)res;
}
