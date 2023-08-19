#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
#pragma pack(push, 1)
class UDynamicSplinesSubsystem : public UWorldSubsystem {
public:
    char pad_30[0x198];
    static UDynamicSplinesSubsystem* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
