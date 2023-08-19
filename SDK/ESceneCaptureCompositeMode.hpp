#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESceneCaptureCompositeMode : uint8_t {
    SCCM_Overwrite = 0,
    SCCM_Additive = 1,
    SCCM_Composite = 2,
    SCCM_MAX = 3,
};
#pragma pack(pop)
