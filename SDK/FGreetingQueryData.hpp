#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGreetingQueryData {
    bool IsValid; // 0x0
    char pad_1[0xb];
    FName SocialAction; // 0xc
    FName SocialActionResponse; // 0x14
    int32_t SocialActionResponseMagnitude; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
