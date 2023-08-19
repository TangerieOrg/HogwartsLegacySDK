#pragma once
#include <cstdint>
#include "FAnimNotifyEventReference.hpp"
#pragma pack(push, 1)
struct FAnimNotifyArray {
    TArray<FAnimNotifyEventReference> Notifies; // 0x0
}; // Size: 0x10
#pragma pack(pop)
