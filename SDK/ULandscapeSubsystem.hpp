#pragma once
#include <cstdint>
#include "UTickableWorldSubsystem.hpp"
#pragma pack(push, 1)
class ULandscapeSubsystem : public UTickableWorldSubsystem {
public:
    char pad_40[0x20];
    static ULandscapeSubsystem* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
