#pragma once
#include <cstdint>
class UCurveTable;
#pragma pack(push, 1)
struct FCurveTableRowHandle {
    UCurveTable* CurveTable; // 0x0
    FName RowName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
