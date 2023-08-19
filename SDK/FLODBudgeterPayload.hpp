#pragma once
#include <cstdint>
#include "FBudgeterPayload.hpp"
#pragma pack(push, 1)
struct FLODBudgeterPayload : public FBudgeterPayload {
    char pad_8[0x100];
}; // Size: 0x108
#pragma pack(pop)
