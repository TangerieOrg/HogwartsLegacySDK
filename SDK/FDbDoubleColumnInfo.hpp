#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDbDoubleColumnInfo {
    FString SelectedDataColumn1; // 0x0
    FString SelectedDataColumn2; // 0x10
    TArray<FString> Column1DataList; // 0x20
    TArray<FString> Column2DataList; // 0x30
    char pad_40[0x98];
}; // Size: 0xd8
#pragma pack(pop)
