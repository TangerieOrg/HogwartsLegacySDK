#pragma once
#include <cstdint>
#include "UNumericProperty.hpp"
#pragma pack(push, 1)
class UDoubleProperty : public UNumericProperty {
public:
    static UDoubleProperty* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
