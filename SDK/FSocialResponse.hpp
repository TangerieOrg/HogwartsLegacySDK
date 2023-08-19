#pragma once
#include <cstdint>
#include "ESocialResponseContext\Type.hpp"
#include "FStationQueryData.hpp"
#pragma pack(push, 1)
struct FSocialResponse {
    bool Accepted; // 0x0
    ESocialResponseContext::Type Context; // 0x1
    char pad_2[0x6];
    FString Reason; // 0x8
    FStationQueryData StationToUse; // 0x18
}; // Size: 0x38
#pragma pack(pop)
