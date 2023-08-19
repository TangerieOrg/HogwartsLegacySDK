#pragma once
#include <cstdint>
class UAIDataProvider;
#pragma pack(push, 1)
struct FAIDataProviderValue {
    char pad_0[0x10];
    UAIDataProvider* DataBinding; // 0x10
    FName DataField; // 0x18
}; // Size: 0x20
#pragma pack(pop)
