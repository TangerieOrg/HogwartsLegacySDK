#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderSettingsBlendDomainConsoleLienMode : uint8_t {
    IsZero = 0,
    IsOne = 1,
    GreaterThanOneHalf = 2,
    LessThanOneHalf = 3,
    ERenderSettingsBlendDomainConsoleLienMode_MAX = 4,
};
#pragma pack(pop)
