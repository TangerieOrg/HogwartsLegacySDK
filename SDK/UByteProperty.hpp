#pragma once
#include <cstdint>
#include "UNumericProperty.hpp"
#pragma pack(push, 1)
class UByteProperty : public UNumericProperty {
public:
    char pad_70[0x8];
    static UByteProperty* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
