#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCObjectDescription {
    FString Name; // 0x0
    FString Class; // 0x10
    FString Path; // 0x20
}; // Size: 0x30
#pragma pack(pop)
