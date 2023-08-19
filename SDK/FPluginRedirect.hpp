#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPluginRedirect {
    FString OldPluginName; // 0x0
    FString NewPluginName; // 0x10
}; // Size: 0x20
#pragma pack(pop)
