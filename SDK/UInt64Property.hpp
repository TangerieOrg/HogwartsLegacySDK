#pragma once
#include <cstdint>
#include "UNumericProperty.hpp"
#pragma pack(push, 1)
class UInt64Property : public UNumericProperty {
public:
    static UInt64Property* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
