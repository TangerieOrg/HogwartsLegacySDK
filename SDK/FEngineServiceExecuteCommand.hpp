#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEngineServiceExecuteCommand {
    FString Command; // 0x0
    FString UserName; // 0x10
}; // Size: 0x20
#pragma pack(pop)
