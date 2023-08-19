#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FARObjectUpdatePayload {
    FTransform WorldTransform; // 0x0
}; // Size: 0x30
#pragma pack(pop)
