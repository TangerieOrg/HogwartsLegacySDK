#include "ETrailsRenderAxisOption.hpp"
#include "UParticleModuleTypeDataBase.hpp"
#include "UParticleModuleTypeDataRibbon.hpp"
#include "UStaticMesh.hpp"
UParticleModuleTypeDataRibbon* UParticleModuleTypeDataRibbon::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleTypeDataRibbon");
    return (UParticleModuleTypeDataRibbon*)res;
}
