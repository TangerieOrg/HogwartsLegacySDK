#pragma once
#include <cstdint>
#include "FRCShortPresetDescription.hpp"
#include "FRemoteControlRouteDescription.hpp"
#pragma pack(push, 1)
struct FAPIInfoResponse {
    char pad_0[0x8];
    TArray<FRemoteControlRouteDescription> HttpRoutes; // 0x8
    FRCShortPresetDescription ActivePreset; // 0x18
}; // Size: 0x38
#pragma pack(pop)
