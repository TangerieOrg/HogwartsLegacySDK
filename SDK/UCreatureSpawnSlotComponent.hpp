#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UPrimitiveComponent.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
class UCreatureSpawnSlotComponent : public UPrimitiveComponent {
public:
    bool bIsOffspringSlot; // 0x480
    bool bSpawnPerched; // 0x481
    bool bUseExitAnimation; // 0x482
    char pad_483[0x5];
    UAnimationAsset* ExitAnimationAsset; // 0x488
    bool bExitFlying; // 0x490
    bool bRestrictSpecies; // 0x491
    char pad_492[0x6];
    TArray<FName> AllowedSpecies; // 0x498
    char pad_4a8[0x8];
    static UCreatureSpawnSlotComponent* StaticClass();
    bool IsOccupied();
    FTransform GetSpawnTransform();
}; // Size: 0x4b0
#pragma pack(pop)
