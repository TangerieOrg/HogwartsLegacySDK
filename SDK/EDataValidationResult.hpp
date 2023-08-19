#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDataValidationResult {
    Invalid = 0,
    Valid = 1,
    NotValidated = 2,
    EDataValidationResult_MAX = 3,
};
#pragma pack(pop)
