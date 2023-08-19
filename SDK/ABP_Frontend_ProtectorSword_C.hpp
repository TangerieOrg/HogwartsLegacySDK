#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkeletalMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_ProtectorSword_C : public AActor {
public:
    USkeletalMeshComponent* SK_WPN_TombProtector01_Sword; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    static ABP_Frontend_ProtectorSword_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
