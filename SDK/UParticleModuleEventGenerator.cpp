#include "FParticleEvent_GenerateInfo.hpp"
#include "UParticleModuleEventBase.hpp"
#include "UParticleModuleEventGenerator.hpp"
UParticleModuleEventGenerator* UParticleModuleEventGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleEventGenerator");
    return (UParticleModuleEventGenerator*)res;
}
