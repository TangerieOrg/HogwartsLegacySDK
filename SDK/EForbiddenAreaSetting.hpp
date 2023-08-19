#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EForbiddenAreaSetting : uint8_t {
    All = 0,
    Male = 1,
    Female = 2,
    SpecificNPC = 3,
    EForbiddenAreaSetting_MAX = 4,
};
#pragma pack(pop)
