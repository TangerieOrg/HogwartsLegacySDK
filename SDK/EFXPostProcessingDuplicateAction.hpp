#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFXPostProcessingDuplicateAction : uint8_t {
    Abort = 0,
    Replace = 1,
    RunAnyway = 2,
    EFXPostProcessingDuplicateAction_MAX = 3,
};
#pragma pack(pop)
