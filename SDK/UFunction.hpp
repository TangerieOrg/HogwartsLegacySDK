#pragma once
#include <cstdint>
#include "UStruct.hpp"
#pragma pack(push, 1)
class UFunction : public UStruct {
public:
    char pad_b0[0x30];
    static UFunction* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
