#pragma once
#include <cstdint>
#include "UObjectProperty.hpp"
#pragma pack(push, 1)
class UClassProperty : public UObjectProperty {
public:
    char pad_78[0x8];
    static UClassProperty* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
