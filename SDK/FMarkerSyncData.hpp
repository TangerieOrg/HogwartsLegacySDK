#pragma once
#include <cstdint>
#include "FAnimSyncMarker.hpp"
#pragma pack(push, 1)
struct FMarkerSyncData {
    TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
