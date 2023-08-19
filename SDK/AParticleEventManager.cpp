#include "AActor.hpp"
#include "AParticleEventManager.hpp"
AParticleEventManager* AParticleEventManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleEventManager");
    return (AParticleEventManager*)res;
}
