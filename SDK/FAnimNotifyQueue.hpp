#pragma once
#include <cstdint>
#include "FAnimNotifyEventReference.hpp"
#pragma pack(push, 1)
struct FAnimNotifyQueue {
    char pad_0[0x10];
    TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
    char pad_20[0x50];
}; // Size: 0x70
#pragma pack(pop)
