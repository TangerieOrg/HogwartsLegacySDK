#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EControlRigVectorKind : uint8_t {
    Direction = 0,
    Location = 1,
    EControlRigVectorKind_MAX = 2,
};
#pragma pack(pop)
