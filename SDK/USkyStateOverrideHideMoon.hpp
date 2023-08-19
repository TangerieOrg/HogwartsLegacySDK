#pragma once
#include <cstdint>
#include "USkyStateOverride.hpp"
#pragma pack(push, 1)
class USkyStateOverrideHideMoon : public USkyStateOverride {
public:
    float Priority; // 0x30
    bool bEnabled; // 0x34
    char pad_35[0x3];
    static USkyStateOverrideHideMoon* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
