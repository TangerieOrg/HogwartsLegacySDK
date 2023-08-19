#pragma once
#include <cstdint>
#include "UProperty.hpp"
#pragma pack(push, 1)
class UNameProperty : public UProperty {
public:
    static UNameProperty* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
