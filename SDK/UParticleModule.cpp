#include "UObject.hpp"
#include "UParticleModule.hpp"
UParticleModule* UParticleModule::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModule");
    return (UParticleModule*)res;
}
