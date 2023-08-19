#pragma once
#include <cstdint>
#include "FIsmDesInstance.hpp"
#include "UObject.hpp"
class AActor;
class AMunitionType_Base;
struct FBox;
struct FHitResult;
#pragma pack(push, 1)
class UIsmDestructionManager : public UObject {
public:
    char pad_28[0x60];
    TArray<FIsmDesInstance> PendingInstances; // 0x88
    static UIsmDestructionManager* StaticClass();
    void RegisterMapping();
    static UIsmDestructionManager* Get();
    bool ConvertInstanceIfNecessary(AActor* HitTarget, FBox& Box, float Damage, FHitResult& HitResult, AActor* Instigator, AMunitionType_Base* Munition);
}; // Size: 0x98
#pragma pack(pop)
