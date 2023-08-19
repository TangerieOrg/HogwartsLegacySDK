#pragma once
#include <cstdint>
class UDataTable;
#pragma pack(push, 1)
struct FDataTableRowHandle {
    UDataTable* DataTable; // 0x0
    FName RowName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
