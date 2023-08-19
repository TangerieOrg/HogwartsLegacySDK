#pragma once
#include <cstdint>
#include "UField.hpp"
#pragma pack(push, 1)
class UEnum : public UField {
public:
    char pad_30[0x30];
    static UEnum* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
