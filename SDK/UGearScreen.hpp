#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FRPGUIInfo.hpp"
#include "UTabPageWidget.hpp"
class AActor;
#pragma pack(push, 1)
class UGearScreen : public UTabPageWidget {
public:
    AActor* MenuCharacter; // 0x3c8
    AActor* WandActor; // 0x3d0
    AActor* BroomProxyActor; // 0x3d8
    AActor* MountActor; // 0x3e0
    bool ShowAppearanceGear; // 0x3e8
    bool IsAppearanceInventory; // 0x3e9
    char pad_3ea[0x6];
    static UGearScreen* StaticClass();
    bool UnequipGearItem(EGearSlotIDEnum GearSlot, FGearItemID& NewGearItemId);
    FGearItemID MakeGearIdForAppearance(FName GearID, EGearSlotIDEnum SlotID);
    bool IsPlayerOnMount();
    bool IsPlayerOnBroom();
    void GetUnlockedAppearanceGear(EGearSlotIDEnum SlotID, TArray<FString>& OutCostumes, TArray<FString>& OutGeneral);
    TArray<FInventoryResult> GetSortedTools(FName ActiveHolderID, FName StorageHolderID);
    TArray<FRPGUIInfo> GetActiveBuffData();
    bool EquipGearItem(FGearItemID GearItemID, FGearItemID& NewGearItemId);
}; // Size: 0x3f0
#pragma pack(pop)
