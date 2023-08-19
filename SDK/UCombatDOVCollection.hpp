#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCombatDOVCollection : public UObject {
public:
    char pad_28[0x1e8];
    static UCombatDOVCollection* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
