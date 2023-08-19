#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEngineServiceAuthDeny {
    FString UserName; // 0x0
    FString UserToDeny; // 0x10
}; // Size: 0x20
#pragma pack(pop)
