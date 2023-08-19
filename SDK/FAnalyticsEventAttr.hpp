#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnalyticsEventAttr {
    FString Name; // 0x0
    FString Value; // 0x10
}; // Size: 0x20
#pragma pack(pop)
