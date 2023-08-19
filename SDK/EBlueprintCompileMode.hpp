#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlueprintCompileMode {
    Default = 0,
    Development = 1,
    FinalRelease = 2,
    EBlueprintCompileMode_MAX = 3,
};
#pragma pack(pop)
