#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FEditorMapPerformanceTestDefinition {
    FSoftObjectPath PerformanceTestmap; // 0x0
    int32_t TestTimer; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
