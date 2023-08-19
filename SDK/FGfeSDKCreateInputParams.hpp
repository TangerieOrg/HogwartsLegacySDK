#pragma once
#include <cstdint>
#include "EGfeSDKScope.hpp"
#pragma pack(push, 1)
struct FGfeSDKCreateInputParams {
    FString AppName; // 0x0
    TArray<EGfeSDKScope> RequiredScopes; // 0x10
    bool PollForCallbacks; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
