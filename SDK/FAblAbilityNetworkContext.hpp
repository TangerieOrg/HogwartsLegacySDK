#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAblAbilityNetworkContext {
    char pad_0[0x20];
    TArray<void*> m_TargetActors; // 0x20
    int8_t m_CurrentStacks; // 0x30
    char pad_31[0x3];
    float m_TimeStamp; // 0x34
}; // Size: 0x38
#pragma pack(pop)
