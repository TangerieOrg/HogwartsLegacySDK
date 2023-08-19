#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UTargetHitData : public UObject {
public:
    char pad_28[0x20];
    static UTargetHitData* StaticClass();
    void Remove();
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0x48
#pragma pack(pop)
