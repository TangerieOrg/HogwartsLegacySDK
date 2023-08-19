#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRagdollBodyAttachment {
    FName AttachBoneName; // 0x0
    TArray<FName> AttachBodyNames; // 0x8
}; // Size: 0x18
#pragma pack(pop)
