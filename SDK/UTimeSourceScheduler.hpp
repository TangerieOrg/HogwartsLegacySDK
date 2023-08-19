#pragma once
#include <cstdint>
#include "UTimeSourceVolume.hpp"
#pragma pack(push, 1)
class UTimeSourceScheduler : public UTimeSourceVolume {
public:
    bool bDisable; // 0x28
    char pad_29[0x7];
    static UTimeSourceScheduler* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
