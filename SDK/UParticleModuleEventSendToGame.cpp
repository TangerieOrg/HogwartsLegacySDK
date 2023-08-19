#include "UObject.hpp"
#include "UParticleModuleEventSendToGame.hpp"
UParticleModuleEventSendToGame* UParticleModuleEventSendToGame::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleEventSendToGame");
    return (UParticleModuleEventSendToGame*)res;
}
