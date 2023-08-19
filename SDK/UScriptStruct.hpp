#pragma once
#include <cstdint>
#include "UStruct.hpp"
#pragma pack(push, 1)
class UScriptStruct : public UStruct {
public:
    char pad_b0[0x10];
    static UScriptStruct* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
