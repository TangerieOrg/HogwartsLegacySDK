#pragma once
#include <cstdint>
class UDataTable;
#pragma pack(push, 1)
struct FDataTableCategoryHandle {
    UDataTable* DataTable; // 0x0
    FName ColumnName; // 0x8
    FName RowContents; // 0x10
}; // Size: 0x18
#pragma pack(pop)
