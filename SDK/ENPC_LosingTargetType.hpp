#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_LosingTargetType : uint8_t {
    None = 0,
    Seek = 1,
    Death = 2,
    Default = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
