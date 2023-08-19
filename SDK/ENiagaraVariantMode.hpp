#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraVariantMode : int32_t {
    None = 0,
    Object = 1,
    DataInterface = 2,
    Bytes = 3,
    ENiagaraVariantMode_MAX = 4,
};
#pragma pack(pop)
