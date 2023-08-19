#pragma once
#include <cstdint>
#include "UObjectPropertyBase.hpp"
#pragma pack(push, 1)
class UObjectProperty : public UObjectPropertyBase {
public:
    static UObjectProperty* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
