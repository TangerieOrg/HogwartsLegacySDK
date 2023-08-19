#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
class UCurveFloat;
#pragma pack(push, 1)
class UablRepresentInventoryItemTask : public UAblAbilityTask {
public:
    UClass* SpawnClass; // 0x70
    UClass* TemplateClass; // 0x78
    UClass* MunitionTemplateClass; // 0x80
    FVector Scale; // 0x88
    FName AttachSocket; // 0x94
    char pad_9c[0x4];
    UCurveFloat* AlphaCurve; // 0xa0
    static UablRepresentInventoryItemTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
