#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlueprintNativizationFlag {
    Disabled = 0,
    Dependency = 1,
    ExplicitlyEnabled = 2,
    EBlueprintNativizationFlag_MAX = 3,
};
#pragma pack(pop)
