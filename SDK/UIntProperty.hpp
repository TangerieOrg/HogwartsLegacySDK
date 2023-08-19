#pragma once
#include <cstdint>
#include "UNumericProperty.hpp"
#pragma pack(push, 1)
class UIntProperty : public UNumericProperty {
public:
    static UIntProperty* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
