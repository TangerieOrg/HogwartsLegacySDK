#pragma once
#include <cstdint>
#include "UNumericProperty.hpp"
#pragma pack(push, 1)
class UFloatProperty : public UNumericProperty {
public:
    static UFloatProperty* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
