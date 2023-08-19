#pragma once
#include <cstdint>
#include "UObject.hpp"
class UScriptStruct;
#pragma pack(push, 1)
class UDataTable : public UObject {
public:
    UScriptStruct* RowStruct; // 0x28
    char pad_30[0x50];
    uint8_t bStripFromClientBuilds : 1; // 0x80
    uint8_t bIgnoreExtraFields : 1; // 0x80
    uint8_t bIgnoreMissingFields : 1; // 0x80
    uint8_t pad_bitfield_80_3 : 5;
    char pad_81[0x7];
    FString ImportKeyField; // 0x88
    char pad_98[0x18];
    static UDataTable* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
