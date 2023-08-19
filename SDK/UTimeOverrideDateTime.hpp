#pragma once
#include <cstdint>
#include "UTimeOverrideBase.hpp"
#pragma pack(push, 1)
class UTimeOverrideDateTime : public UTimeOverrideBase {
public:
    static UTimeOverrideDateTime* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
