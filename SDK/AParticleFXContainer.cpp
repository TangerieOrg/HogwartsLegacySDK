#include "AActor.hpp"
#include "AParticleFXContainer.hpp"
#include "UFunction.hpp"
#include "UNiagaraSystem.hpp"
#include "UParticleSystem.hpp"
#include "USceneComponent.hpp"
AParticleFXContainer* AParticleFXContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ParticleFXContainer");
    return (AParticleFXContainer*)res;
}
void AParticleFXContainer::DestroySelf() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleFXContainer.DestroySelf"));
    struct Params_DestroySelf {
    }; // Size: 0x0
    Params_DestroySelf params{};
    ProcessEvent(func, &params);
}
void AParticleFXContainer::DeactiveAndDestroyAfterXSeconds(float Seconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleFXContainer.DeactiveAndDestroyAfterXSeconds"));
    struct Params_DeactiveAndDestroyAfterXSeconds {
        float Seconds; // 0x0
    }; // Size: 0x4
    Params_DeactiveAndDestroyAfterXSeconds params{};
    params.Seconds = (float)Seconds;
    ProcessEvent(func, &params);
}
void AParticleFXContainer::AddParticleEmitter(UParticleSystem* SystemTemplate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleFXContainer.AddParticleEmitter"));
    struct Params_AddParticleEmitter {
        UParticleSystem* SystemTemplate; // 0x0
    }; // Size: 0x8
    Params_AddParticleEmitter params{};
    params.SystemTemplate = (UParticleSystem*)SystemTemplate;
    ProcessEvent(func, &params);
}
void AParticleFXContainer::AddNiagaraSystem(UNiagaraSystem* SystemTemplate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleFXContainer.AddNiagaraSystem"));
    struct Params_AddNiagaraSystem {
        UNiagaraSystem* SystemTemplate; // 0x0
    }; // Size: 0x8
    Params_AddNiagaraSystem params{};
    params.SystemTemplate = (UNiagaraSystem*)SystemTemplate;
    ProcessEvent(func, &params);
}
