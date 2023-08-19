#pragma once
#include <cstdint>
#include "UEnum.hpp"
#pragma pack(push, 1)
class UUserDefinedEnum : public UEnum {
public:
    char pad_60[0x50];
    static UUserDefinedEnum* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
