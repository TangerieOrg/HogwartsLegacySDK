#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCustomizedToolMenu {
    FName Name; // 0x0
    char pad_8[0xf0];
    TArray<FName> SectionOrder; // 0xf8
    char pad_108[0xe0];
}; // Size: 0x1e8
#pragma pack(pop)
