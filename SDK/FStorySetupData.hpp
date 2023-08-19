#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStorySetupData {
    FName SocialAction; // 0x0
    int32_t ConnectionIndex; // 0x8
    int32_t TargetConnectionsBitmask; // 0xc
}; // Size: 0x10
#pragma pack(pop)
