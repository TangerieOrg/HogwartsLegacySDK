#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UMultiFX2Asset;
struct FHitResult;
class UClass;
class AActor;
#pragma pack(push, 1)
class UFierySendComponent : public UActorComponent {
public:
    UMultiFX2Asset* HitFx; // 0xc8
    UClass* MunitionClass; // 0xd0
    bool bDestroyOnHit; // 0xd8
    char pad_d9[0x7];
    AActor* Instigator; // 0xe0
    char pad_e8[0x10];
    static UFierySendComponent* StaticClass();
    void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    static void AddFierySendComponent(AActor* Actor, AActor* InInstigator, UMultiFX2Asset* InHitFx, UClass* InMunitionClass, bool bInDestroyOnHit);
}; // Size: 0xf8
#pragma pack(pop)
