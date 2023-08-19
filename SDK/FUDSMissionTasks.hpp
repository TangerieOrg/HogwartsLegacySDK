#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUDSMissionTasks {
    char pad_0[0xf0];
    FString BranchStallTask; // 0xf0
    float BranchStallTaskNumber; // 0x100
    char pad_104[0x4];
}; // Size: 0x108
#pragma pack(pop)
