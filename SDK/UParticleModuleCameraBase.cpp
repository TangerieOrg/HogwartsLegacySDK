#include "UParticleModule.hpp"
#include "UParticleModuleCameraBase.hpp"
UParticleModuleCameraBase* UParticleModuleCameraBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleCameraBase");
    return (UParticleModuleCameraBase*)res;
}
