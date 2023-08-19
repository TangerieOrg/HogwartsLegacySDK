#pragma once
#include <cstdint>
#include "FAnimNotifyEventReference.hpp"
#pragma pack(push, 1)
struct FTickAssetPlayerProxy_WeightedNotify {
    TArray<FAnimNotifyEventReference> NotifyReferences; // 0x0
    float NotifyWeight; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
