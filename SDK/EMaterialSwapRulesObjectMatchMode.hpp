#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialSwapRulesObjectMatchMode : uint8_t {
    Exact = 0,
    SubStringCaseSensitve = 1,
    SubStringIgnoreCase = 2,
    EMaterialSwapRulesObjectMatchMode_MAX = 3,
};
#pragma pack(pop)
