#pragma once
#include <cstdint>
#include "UObject.hpp"
class UDataTable;
#pragma pack(push, 1)
class UGameplayTagsManager : public UObject {
public:
    char pad_28[0x208];
    TArray<UDataTable*> GameplayTagTables; // 0x230
    static UGameplayTagsManager* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
