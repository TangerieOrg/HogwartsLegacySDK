#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDuelTechniqueRequirementFunction {
    All = 0,
    AnyOne = 1,
    AnyTwo = 2,
    FirstPlusAnyOne = 3,
    EDuelTechniqueRequirementFunction_MAX = 4,
};
#pragma pack(pop)
