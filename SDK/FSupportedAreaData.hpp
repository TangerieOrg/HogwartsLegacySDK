#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FSupportedAreaData {
    FString AreaClassName; // 0x0
    int32_t AreaID; // 0x10
    char pad_14[0x4];
    UClass* AreaClass; // 0x18
}; // Size: 0x20
#pragma pack(pop)
