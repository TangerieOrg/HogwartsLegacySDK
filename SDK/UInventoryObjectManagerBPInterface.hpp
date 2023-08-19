#pragma once
#include <cstdint>
#include "UObject.hpp"
class UStaticMesh;
struct FItemProperties;
#pragma pack(push, 1)
class UInventoryObjectManagerBPInterface : public UObject {
public:
    static UInventoryObjectManagerBPInterface* StaticClass();
    static UStaticMesh* GetItemStaticMesh(FName InventoryObjectID);
    static int32_t GetItemSellPrice(int32_t DbPrice, int32_t EconomyValue);
    static bool GetItemProperties(FName InventoryObjectID, FItemProperties& ItemProperties, FName Variation);
    static int32_t GetInventorySlotCapacityByName(FName ItemId, FName ItemType, FName SlotLevelName);
    static int32_t GetInventorySlotCapacityByIndex(FName ItemId, FName ItemType, int32_t SlotLevelIndex);
}; // Size: 0x28
#pragma pack(pop)
