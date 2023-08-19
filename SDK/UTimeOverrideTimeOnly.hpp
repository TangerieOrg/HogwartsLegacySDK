#pragma once
#include <cstdint>
#include "UTimeOverrideBase.hpp"
#pragma pack(push, 1)
class UTimeOverrideTimeOnly : public UTimeOverrideBase {
public:
    static UTimeOverrideTimeOnly* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
