#pragma once
#include <cstdint>
#include "FPropertyAccessCopy.hpp"
#pragma pack(push, 1)
struct FPropertyAccessCopyBatch {
    TArray<FPropertyAccessCopy> Copies; // 0x0
}; // Size: 0x10
#pragma pack(pop)
