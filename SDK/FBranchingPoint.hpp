#pragma once
#include <cstdint>
#include "FAnimLinkableElement.hpp"
#pragma pack(push, 1)
struct FBranchingPoint : public FAnimLinkableElement {
    FName EventName; // 0x30
    float DisplayTime; // 0x38
    float TriggerTimeOffset; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
