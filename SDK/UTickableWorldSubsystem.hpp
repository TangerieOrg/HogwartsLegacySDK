#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
#pragma pack(push, 1)
class UTickableWorldSubsystem : public UWorldSubsystem {
public:
    char pad_30[0x10];
    static UTickableWorldSubsystem* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
