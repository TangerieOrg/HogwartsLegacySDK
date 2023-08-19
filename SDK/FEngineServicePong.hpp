#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FEngineServicePong {
    FString CurrentLevel; // 0x0
    int32_t EngineVersion; // 0x10
    bool HasBegunPlay; // 0x14
    char pad_15[0x3];
    FGuid InstanceId; // 0x18
    FString InstanceType; // 0x28
    FGuid SessionId; // 0x38
    float WorldTimeSeconds; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
