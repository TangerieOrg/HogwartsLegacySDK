#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicMeshTangentCalcType : uint8_t {
    NoTangents = 0,
    AutoCalculated = 1,
    ExternallyCalculated = 2,
    EDynamicMeshTangentCalcType_MAX = 3,
};
#pragma pack(pop)
