#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStationValidationError {
    FString ShortMessage; // 0x0
    FString LongMessage; // 0x10
}; // Size: 0x20
#pragma pack(pop)
