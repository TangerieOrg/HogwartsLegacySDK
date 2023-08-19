#pragma once
#include <cstdint>
#include "UProperty.hpp"
#pragma pack(push, 1)
class UEnumProperty : public UProperty {
public:
    char pad_70[0x10];
    static UEnumProperty* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
