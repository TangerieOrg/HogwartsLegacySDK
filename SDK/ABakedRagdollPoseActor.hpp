#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UBakedRagdollPoseComponent;
struct FHitResult;
#pragma pack(push, 1)
class ABakedRagdollPoseActor : public AActor {
public:
    UBakedRagdollPoseComponent* BakedPoseComponent; // 0x248
    char pad_250[0x18];
    AActor* ActorConstrainedToUs; // 0x268
    static ABakedRagdollPoseActor* StaticClass();
    void HandleOnActorHit(AActor* SelfActor, AActor* OtherActor, FVector ImpulseNormal, FHitResult& HitReslt);
}; // Size: 0x270
#pragma pack(pop)
