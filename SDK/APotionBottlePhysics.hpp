#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class APotionBottlePhysics : public AActor {
public:
    UStaticMeshComponent* PotionMesh; // 0x248
    FVector ThrowLinearVelocity; // 0x250
    FVector ThrowAngularVelocity; // 0x25c
    float FadeDelay; // 0x268
    float FadeDuration; // 0x26c
    char pad_270[0x8];
    static APotionBottlePhysics* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
