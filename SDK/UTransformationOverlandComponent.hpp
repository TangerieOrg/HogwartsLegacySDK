#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "FTransformationOverlandData.hpp"
#include "UStateEffectComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UTransformationOverlandComponent : public UStateEffectComponent {
public:
    AActor* newActor; // 0x190
    FTransformationOverlandData Data; // 0x198
    char pad_2a0[0x48];
    static UTransformationOverlandComponent* StaticClass();
    void OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason);
    void HealthZero(AActor* InActor);
}; // Size: 0x2e8
#pragma pack(pop)
