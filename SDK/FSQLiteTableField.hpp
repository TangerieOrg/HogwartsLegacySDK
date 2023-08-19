#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSQLiteTableField {
    FString ResultStr; // 0x0
    FString FieldName; // 0x10
    FString FieldType; // 0x20
    FString FieldValue; // 0x30
}; // Size: 0x40
#pragma pack(pop)
