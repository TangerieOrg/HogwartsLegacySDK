#pragma once
#include <cstdint>
#include "FBudgeterPayload.hpp"
#pragma pack(push, 1)
struct FSceneRigBudgeterPayload : public FBudgeterPayload {
    char pad_8[0x20];
}; // Size: 0x28
#pragma pack(pop)
