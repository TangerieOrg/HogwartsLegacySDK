#include "ELocationSkelVertSurfaceSource.hpp"
#include "FVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationSkelVertSurface.hpp"
UParticleModuleLocationSkelVertSurface* UParticleModuleLocationSkelVertSurface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationSkelVertSurface");
    return (UParticleModuleLocationSkelVertSurface*)res;
}
