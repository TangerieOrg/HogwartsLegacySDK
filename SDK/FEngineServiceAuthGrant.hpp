#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEngineServiceAuthGrant {
    FString UserName; // 0x0
    FString UserToGrant; // 0x10
}; // Size: 0x20
#pragma pack(pop)
