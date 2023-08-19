#pragma once
#include <cstdint>
#include "UProperty.hpp"
#pragma pack(push, 1)
class UMapProperty : public UProperty {
public:
    char pad_70[0x28];
    static UMapProperty* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
