#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
class UClass;
class UAnimationArchitectAsset;
#pragma pack(push, 1)
class ABroomItemTool : public AInventoryItemTool {
public:
    UClass* FlyingBroomClass; // 0x430
    UClass* FlyingBroomProp; // 0x438
    float SpeedBoostUnavailableMessageTimeout; // 0x440
    float SpeedBoostOnCooldownMessageTimeout; // 0x444
    char pad_448[0x28];
    UAnimationArchitectAsset* LoadedAnims; // 0x470
    char pad_478[0x30];
    static ABroomItemTool* StaticClass();
    void SpawnAndMountBroom(bool bUseTransition, bool bInDestroyAfterMount);
    void OnAnimsLoaded(bool bUseTransition);
    void MountBroom(bool bUseTransition);
}; // Size: 0x4a8
#pragma pack(pop)
