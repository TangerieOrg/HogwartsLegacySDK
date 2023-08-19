#pragma once
#include <cstdint>
#include "FInventoryResult.hpp"
#include "FLootDropInfo.hpp"
#include "FLootSlot.hpp"
#include "UActorComponent.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class ULootDropComponent : public UActorComponent {
public:
    FLootDropInfo DbLootDropInfo; // 0xc8
    int32_t LootDropLevel; // 0xf8
    char pad_fc[0x4];
    TArray<FString> LootContainers; // 0x100
    TArray<FLootSlot> LootItems; // 0x110
    bool PlayerLevelOverride; // 0x120
    char pad_121[0x3];
    int32_t SecondsBeforeRerollingLoot; // 0x124
    bool bCogOverride; // 0x128
    char pad_129[0x3];
    FName PersistentID; // 0x12c
    bool bResetExpiryIfUnique; // 0x134
    char pad_135[0x13];
    bool bPreloadLootDropItemsFromDb; // 0x148
    char pad_149[0x7];
    TArray<UObject*> LootDropAssetTypes; // 0x150
    char pad_160[0x18];
    static ULootDropComponent* StaticClass();
    void SetupInventory();
    void SetLootLevel(int32_t Level);
    void SetLoopGroup(FString lootGroup);
    void SetCurrentLootCategoryID();
    void SaveLootToInventory();
    void SaveLootItemsToInventory(TArray<FLootSlot>& InLootItems);
    bool IsContainerEmpty();
    int32_t GetLootLevel();
    TArray<FLootSlot> GetLootItems();
    static ULootDropComponent* GetLootDropComponent(AActor* InActor);
    TArray<FInventoryResult> GetInventoryInfo();
    void FillFromInventory();
    bool CurrentInventoryHasUniqueItem();
    static void ClearCurrentLootCategoryID();
}; // Size: 0x178
#pragma pack(pop)
