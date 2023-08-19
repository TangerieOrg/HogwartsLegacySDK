#pragma once
#include <cstdint>
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
class ABiped_Player;
class USkeletalMeshComponent;
class AActor;
#pragma pack(push, 1)
class UablRepresentInventoryItemTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    ABiped_Player* BipedPlayer; // 0x28
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x30
    AActor* SpawnedActor; // 0x38
    FInventoryResult InventoryResult; // 0x40
    FItemProperties ItemProperties; // 0xc8
    char pad_134[0x4];
    static UablRepresentInventoryItemTaskScratchPad* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
