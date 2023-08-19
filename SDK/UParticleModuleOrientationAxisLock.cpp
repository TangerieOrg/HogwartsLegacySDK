#include "EParticleAxisLock.hpp"
#include "UParticleModuleOrientationAxisLock.hpp"
#include "UParticleModuleOrientationBase.hpp"
UParticleModuleOrientationAxisLock* UParticleModuleOrientationAxisLock::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleOrientationAxisLock");
    return (UParticleModuleOrientationAxisLock*)res;
}
