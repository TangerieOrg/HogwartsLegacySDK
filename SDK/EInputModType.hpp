#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInputModType : uint8_t {
    UnaffectedByExternalInput = 0,
    ValueOfExternalInput = 1,
    ValueOfInputCurveEvaluatedByExternalInput = 2,
    EInputModType_MAX = 3,
};
#pragma pack(pop)
