#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNetDriverDefinition {
    FName DefName; // 0x0
    FName DriverClassName; // 0x8
    FName DriverClassNameFallback; // 0x10
}; // Size: 0x18
#pragma pack(pop)
