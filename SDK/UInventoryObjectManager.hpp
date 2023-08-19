#pragma once
#include <cstdint>
#include "FGameplayProperty_Int.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class AActor;
#pragma pack(push, 1)
class UInventoryObjectManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x10];
    FGameplayProperty_Int MaxStackModifier; // 0xb8
    char pad_138[0x60];
    static UInventoryObjectManager* StaticClass();
    void SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
}; // Size: 0x198
#pragma pack(pop)
