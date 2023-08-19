#pragma once
#include <cstdint>
#include "UField.hpp"
#pragma pack(push, 1)
class UProperty : public UField {
public:
    char pad_30[0x40];
    static UProperty* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
