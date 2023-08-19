#pragma once
#include <cstdint>
#include "UDataTable.hpp"
#pragma pack(push, 1)
class UCompositeDataTable : public UDataTable {
public:
    TArray<UDataTable*> ParentTables; // 0xb0
    TArray<UDataTable*> OldParentTables; // 0xc0
    char pad_d0[0x8];
    static UCompositeDataTable* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
