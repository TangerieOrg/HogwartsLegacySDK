#pragma once
#include <cstdint>
#include "EUserDefinedStructureStatus.hpp"
#include "FGuid.hpp"
#include "UScriptStruct.hpp"
#pragma pack(push, 1)
class UUserDefinedStruct : public UScriptStruct {
public:
    EUserDefinedStructureStatus Status; // 0xc0
    char pad_c1[0x3];
    FGuid Guid; // 0xc4
    char pad_d4[0x34];
    static UUserDefinedStruct* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
