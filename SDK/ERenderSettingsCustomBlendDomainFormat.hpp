#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderSettingsCustomBlendDomainFormat {
    Default = 0,
    ZeroToOne = 1,
    NoIfZero = 2,
    YesIfOne = 3,
    OnlyNoIfZero = 4,
    OnlyYesIfOne = 5,
    OnlyNoIfNotOne = 6,
    OnlyYesIfNotZero = 7,
    HideIfDefault = 8,
    Hide = 9,
    ERenderSettingsCustomBlendDomainFormat_MAX = 10,
};
#pragma pack(pop)
