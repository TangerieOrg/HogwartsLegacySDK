#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FConjuredHistoryItem {
    TArray<AActor*> Actors; // 0x0
}; // Size: 0x10
#pragma pack(pop)
