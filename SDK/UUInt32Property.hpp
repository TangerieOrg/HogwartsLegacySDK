#pragma once
#include <cstdint>
#include "UNumericProperty.hpp"
#pragma pack(push, 1)
class UUInt32Property : public UNumericProperty {
public:
    static UUInt32Property* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
