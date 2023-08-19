#include "FItemProperties.hpp"
#include "UFunction.hpp"
#include "UInventoryObjectManagerBPInterface.hpp"
#include "UObject.hpp"
#include "UStaticMesh.hpp"
UStaticMesh* UInventoryObjectManagerBPInterface::GetItemStaticMesh(FName InventoryObjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObjectManagerBPInterface.GetItemStaticMesh"));
    struct Params_GetItemStaticMesh {
        FName InventoryObjectID; // 0x0
        UStaticMesh* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetItemStaticMesh params{};
    params.InventoryObjectID = (FName)InventoryObjectID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStaticMesh*)params.ReturnValue;
}
UInventoryObjectManagerBPInterface* UInventoryObjectManagerBPInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryObjectManagerBPInterface");
    return (UInventoryObjectManagerBPInterface*)res;
}
int32_t UInventoryObjectManagerBPInterface::GetInventorySlotCapacityByIndex(FName ItemId, FName ItemType, int32_t SlotLevelIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObjectManagerBPInterface.GetInventorySlotCapacityByIndex"));
    struct Params_GetInventorySlotCapacityByIndex {
        FName ItemId; // 0x0
        FName ItemType; // 0x8
        int32_t SlotLevelIndex; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetInventorySlotCapacityByIndex params{};
    params.ItemId = (FName)ItemId;
    params.ItemType = (FName)ItemType;
    params.SlotLevelIndex = (int32_t)SlotLevelIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UInventoryObjectManagerBPInterface::GetItemSellPrice(int32_t DbPrice, int32_t EconomyValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObjectManagerBPInterface.GetItemSellPrice"));
    struct Params_GetItemSellPrice {
        int32_t DbPrice; // 0x0
        int32_t EconomyValue; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetItemSellPrice params{};
    params.DbPrice = (int32_t)DbPrice;
    params.EconomyValue = (int32_t)EconomyValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UInventoryObjectManagerBPInterface::GetItemProperties(FName InventoryObjectID, FItemProperties& ItemProperties, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObjectManagerBPInterface.GetItemProperties"));
    struct Params_GetItemProperties {
        FName InventoryObjectID; // 0x0
        FItemProperties ItemProperties; // 0x8
        FName Variation; // 0x74
        bool ReturnValue; // 0x7c
    }; // Size: 0x7d
    Params_GetItemProperties params{};
    params.InventoryObjectID = (FName)InventoryObjectID;
    params.ItemProperties = (FItemProperties)ItemProperties;
    params.Variation = (FName)Variation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ItemProperties = params.ItemProperties;
    return (bool)params.ReturnValue;
}
int32_t UInventoryObjectManagerBPInterface::GetInventorySlotCapacityByName(FName ItemId, FName ItemType, FName SlotLevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObjectManagerBPInterface.GetInventorySlotCapacityByName"));
    struct Params_GetInventorySlotCapacityByName {
        FName ItemId; // 0x0
        FName ItemType; // 0x8
        FName SlotLevelName; // 0x10
        int32_t ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetInventorySlotCapacityByName params{};
    params.ItemId = (FName)ItemId;
    params.ItemType = (FName)ItemType;
    params.SlotLevelName = (FName)SlotLevelName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
