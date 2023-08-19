#pragma once
#include <cstdint>
#include "USoftObjectProperty.hpp"
#pragma pack(push, 1)
class USoftClassProperty : public USoftObjectProperty {
public:
    char pad_78[0x8];
    static USoftClassProperty* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
