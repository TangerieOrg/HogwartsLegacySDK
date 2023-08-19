#include "UParticleModuleLocation.hpp"
#include "UParticleModuleLocationWorldOffset.hpp"
UParticleModuleLocationWorldOffset* UParticleModuleLocationWorldOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationWorldOffset");
    return (UParticleModuleLocationWorldOffset*)res;
}
