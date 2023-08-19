#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocationFilteringModeEnum : uint8_t {
    ChaosNiagara_LocationFilteringMode_Inclusive = 0,
    ChaosNiagara_LocationFilteringMode_Exclusive = 1,
    ChaosNiagara_Max = 2,
};
#pragma pack(pop)
