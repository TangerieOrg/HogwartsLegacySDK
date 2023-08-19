#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
#pragma pack(push, 1)
class UObjectTraceWorldSubsystem : public UWorldSubsystem {
public:
    char pad_30[0x8];
    static UObjectTraceWorldSubsystem* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
