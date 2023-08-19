#pragma once
#include <cstdint>
namespace EEvaluateCurveTableResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    RowFound = 0,
    RowNotFound = 1,
    EEvaluateCurveTableResult_MAX = 2,
};
#pragma pack(pop)
}
