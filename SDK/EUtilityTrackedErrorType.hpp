#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUtilityTrackedErrorType : uint8_t {
    Error_Unspecified = 0,
    Error_InvalidActor = 1,
    Error_InvalidPath = 2,
    Error_MissingNavmesh = 3,
    Error_MAX = 4,
};
#pragma pack(pop)
