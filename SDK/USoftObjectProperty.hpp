#pragma once
#include <cstdint>
#include "UObjectPropertyBase.hpp"
#pragma pack(push, 1)
class USoftObjectProperty : public UObjectPropertyBase {
public:
    static USoftObjectProperty* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
