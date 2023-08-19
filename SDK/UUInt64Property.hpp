#pragma once
#include <cstdint>
#include "UNumericProperty.hpp"
#pragma pack(push, 1)
class UUInt64Property : public UNumericProperty {
public:
    static UUInt64Property* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
