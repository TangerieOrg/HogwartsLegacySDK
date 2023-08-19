#pragma once
#include <cstdint>
class UQualifierConsideration;
#pragma pack(push, 1)
struct FConsiderationWithDisplayName {
    FString DisplayName; // 0x0
    UQualifierConsideration* Consideration; // 0x10
}; // Size: 0x18
#pragma pack(pop)
