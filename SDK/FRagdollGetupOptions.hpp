#pragma once
#include <cstdint>
#include "FRagdollState.hpp"
#pragma pack(push, 1)
struct FRagdollGetupOptions {
    FRagdollState RequiredState; // 0x0
    FName TargetGetupProfile; // 0x30
}; // Size: 0x38
#pragma pack(pop)
