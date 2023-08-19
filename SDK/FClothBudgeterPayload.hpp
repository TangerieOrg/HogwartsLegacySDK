#pragma once
#include <cstdint>
#include "FBudgeterPayload.hpp"
#pragma pack(push, 1)
struct FClothBudgeterPayload : public FBudgeterPayload {
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
