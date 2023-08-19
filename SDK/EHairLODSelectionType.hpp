#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHairLODSelectionType : uint8_t {
    Cpu = 0,
    Gpu = 1,
    EHairLODSelectionType_MAX = 2,
};
#pragma pack(pop)
