#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCPropertyDescription {
    FString Name; // 0x0
    FString Description; // 0x10
    FString Type; // 0x20
    FString ContainerType; // 0x30
    FString KeyType; // 0x40
    char pad_50[0x50];
}; // Size: 0xa0
#pragma pack(pop)
