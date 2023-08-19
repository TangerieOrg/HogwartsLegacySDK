#pragma once
#include <cstdint>
#include "FLootSlot.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULootDrop : public UObject {
public:
    char pad_28[0x40];
    static ULootDrop* StaticClass();
    void SetContainerID(FString ContainerID);
    bool RemoveItems(FString Item, int32_t Quantity, FString Variation);
    void RemoveAllItems();
    void LootDropGenerateContents(FString ContentCategory, int32_t Level);
    TArray<FLootSlot> GetContents();
    FString GetContainerID();
    TArray<FLootSlot> GenerateContents(FString Category, int32_t Level, bool bForceGeneration);
    bool AddItems(FString Item, int32_t Quantity, FString Variation, bool IsUnique, bool IsAlreadyIdentified);
}; // Size: 0x68
#pragma pack(pop)
