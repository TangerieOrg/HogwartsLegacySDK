#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDbSingleColumnInfo {
    FString SelectedData; // 0x0
    TArray<FString> ColumnDataList; // 0x10
    FString WidgetItemName; // 0x20
    char pad_30[0x58];
}; // Size: 0x88
#pragma pack(pop)
