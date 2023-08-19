#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBTDelegates {
    TArray<void*> DelegateList; // 0x0
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
