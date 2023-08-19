#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraHelpersPrimMatchMode : uint8_t {
    Exact = 0,
    SubStringCaseSensitve = 1,
    SubStringIgnoreCase = 2,
    ENiagaraHelpersPrimMatchMode_MAX = 3,
};
#pragma pack(pop)
