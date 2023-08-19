#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERCAccess : uint8_t {
    NO_ACCESS = 0,
    READ_ACCESS = 1,
    WRITE_ACCESS = 2,
    WRITE_TRANSACTION_ACCESS = 3,
    ERCAccess_MAX = 4,
};
#pragma pack(pop)
