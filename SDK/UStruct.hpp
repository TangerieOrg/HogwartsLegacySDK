#pragma once
#include <cstdint>
#include "UField.hpp"
#pragma pack(push, 1)
class UStruct : public UField {
public:
    char pad_30[0x10];
    UStruct* SuperStruct; // 0x40
    char pad_48[0x68];
    static UStruct* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
