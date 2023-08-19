#include "ESpawnAreaEnum.hpp"
#include "UCurveFloat.hpp"
#include "UIncendioParticleModule.hpp"
#include "UParticleModuleLocationStaticMesh.hpp"
UIncendioParticleModule* UIncendioParticleModule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IncendioParticleModule");
    return (UIncendioParticleModule*)res;
}
