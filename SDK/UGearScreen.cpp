#include "AActor.hpp"
#include "EGearSlotIDEnum.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FRPGUIInfo.hpp"
#include "UFunction.hpp"
#include "UGearScreen.hpp"
#include "UTabPageWidget.hpp"
UGearScreen* UGearScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GearScreen");
    return (UGearScreen*)res;
}
bool UGearScreen::IsPlayerOnMount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.IsPlayerOnMount"));
    struct Params_IsPlayerOnMount {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerOnMount params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearScreen::UnequipGearItem(EGearSlotIDEnum GearSlot, FGearItemID& NewGearItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.UnequipGearItem"));
    struct Params_UnequipGearItem {
        EGearSlotIDEnum GearSlot; // 0x0
        char pad_1[0x3];
        FGearItemID NewGearItemId; // 0x4
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UnequipGearItem params{};
    params.GearSlot = (EGearSlotIDEnum)GearSlot;
    params.NewGearItemId = (FGearItemID)NewGearItemId;
    ProcessEvent(func, &params);
    NewGearItemId = params.NewGearItemId;
    return (bool)params.ReturnValue;
}
FGearItemID UGearScreen::MakeGearIdForAppearance(FName GearID, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.MakeGearIdForAppearance"));
    struct Params_MakeGearIdForAppearance {
        FName GearID; // 0x0
        EGearSlotIDEnum SlotID; // 0x8
        char pad_9[0x3];
        FGearItemID ReturnValue; // 0xc
    }; // Size: 0x20
    Params_MakeGearIdForAppearance params{};
    params.GearID = (FName)GearID;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ProcessEvent(func, &params);
    return (FGearItemID)params.ReturnValue;
}
TArray<FInventoryResult> UGearScreen::GetSortedTools(FName ActiveHolderID, FName StorageHolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.GetSortedTools"));
    struct Params_GetSortedTools {
        FName ActiveHolderID; // 0x0
        FName StorageHolderID; // 0x8
        TArray<FInventoryResult> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetSortedTools params{};
    params.ActiveHolderID = (FName)ActiveHolderID;
    params.StorageHolderID = (FName)StorageHolderID;
    ProcessEvent(func, &params);
    return (TArray<FInventoryResult>)params.ReturnValue;
}
bool UGearScreen::IsPlayerOnBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.IsPlayerOnBroom"));
    struct Params_IsPlayerOnBroom {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerOnBroom params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FRPGUIInfo> UGearScreen::GetActiveBuffData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.GetActiveBuffData"));
    struct Params_GetActiveBuffData {
        TArray<FRPGUIInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetActiveBuffData params{};
    ProcessEvent(func, &params);
    return (TArray<FRPGUIInfo>)params.ReturnValue;
}
void UGearScreen::GetUnlockedAppearanceGear(EGearSlotIDEnum SlotID, TArray<FString>& OutCostumes, TArray<FString>& OutGeneral) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.GetUnlockedAppearanceGear"));
    struct Params_GetUnlockedAppearanceGear {
        EGearSlotIDEnum SlotID; // 0x0
        char pad_1[0x7];
        TArray<FString> OutCostumes; // 0x8
        TArray<FString> OutGeneral; // 0x18
    }; // Size: 0x28
    Params_GetUnlockedAppearanceGear params{};
    params.SlotID = (EGearSlotIDEnum)SlotID;
    params.OutCostumes = (TArray<FString>)OutCostumes;
    params.OutGeneral = (TArray<FString>)OutGeneral;
    ProcessEvent(func, &params);
    OutCostumes = params.OutCostumes;
    OutGeneral = params.OutGeneral;
}
bool UGearScreen::EquipGearItem(FGearItemID GearItemID, FGearItemID& NewGearItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearScreen.EquipGearItem"));
    struct Params_EquipGearItem {
        FGearItemID GearItemID; // 0x0
        FGearItemID NewGearItemId; // 0x14
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_EquipGearItem params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.NewGearItemId = (FGearItemID)NewGearItemId;
    ProcessEvent(func, &params);
    NewGearItemId = params.NewGearItemId;
    return (bool)params.ReturnValue;
}
