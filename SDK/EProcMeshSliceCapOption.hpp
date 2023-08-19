#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EProcMeshSliceCapOption : uint8_t {
    NoCap = 0,
    CreateNewSectionForCap = 1,
    UseLastSectionForCap = 2,
    EProcMeshSliceCapOption_MAX = 3,
};
#pragma pack(pop)
