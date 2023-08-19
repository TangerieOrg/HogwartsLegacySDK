#include "UObject.hpp"
#include "UParticleSystemReplay.hpp"
UParticleSystemReplay* UParticleSystemReplay::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleSystemReplay");
    return (UParticleSystemReplay*)res;
}
