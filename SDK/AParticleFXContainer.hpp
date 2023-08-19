#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
class UParticleSystem;
class UNiagaraSystem;
#pragma pack(push, 1)
class AParticleFXContainer : public AActor {
public:
    char pad_248[0x20];
    USceneComponent* SceneComp; // 0x268
    static AParticleFXContainer* StaticClass();
    void DestroySelf();
    void DeactiveAndDestroyAfterXSeconds(float Seconds);
    void AddParticleEmitter(UParticleSystem* SystemTemplate);
    void AddNiagaraSystem(UNiagaraSystem* SystemTemplate);
}; // Size: 0x270
#pragma pack(pop)
