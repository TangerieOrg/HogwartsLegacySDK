#pragma once
#include <cstdint>
#include "UProperty.hpp"
#pragma pack(push, 1)
class UStrProperty : public UProperty {
public:
    static UStrProperty* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
