#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UAblPhysicalBodyManager : public UObject {
public:
    char pad_28[0x8];
    TArray<float> GlobalBlendedWeights; // 0x30
    char pad_40[0x50];
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x90
    int32_t NumBodies; // 0x98
    char pad_9c[0x4];
    static UAblPhysicalBodyManager* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
