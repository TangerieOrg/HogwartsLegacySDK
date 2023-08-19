#pragma once
#include <cstdint>
#include "UProperty.hpp"
#pragma pack(push, 1)
class USetProperty : public UProperty {
public:
    char pad_70[0x20];
    static USetProperty* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
