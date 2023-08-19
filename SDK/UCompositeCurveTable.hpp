#pragma once
#include <cstdint>
#include "UCurveTable.hpp"
#pragma pack(push, 1)
class UCompositeCurveTable : public UCurveTable {
public:
    TArray<UCurveTable*> ParentTables; // 0xa0
    TArray<UCurveTable*> OldParentTables; // 0xb0
    char pad_c0[0x8];
    static UCompositeCurveTable* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
