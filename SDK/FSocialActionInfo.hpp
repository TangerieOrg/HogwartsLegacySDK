#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSocialActionInfo {
    FName ActionName; // 0x0
    float ActionTime; // 0x8
    FName ActionData; // 0xc
    FName ObserverType; // 0x14
    FName SocialSemantic; // 0x1c
    int32_t SocialActionDynamicRowID; // 0x24
}; // Size: 0x28
#pragma pack(pop)
