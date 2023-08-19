#include "FVector.hpp"
#include "UCurveFloat.hpp"
#include "UParticleModuleLocationStaticMesh.hpp"
#include "USurfaceNormalParticleModule.hpp"
USurfaceNormalParticleModule* USurfaceNormalParticleModule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SurfaceNormalParticleModule");
    return (USurfaceNormalParticleModule*)res;
}
