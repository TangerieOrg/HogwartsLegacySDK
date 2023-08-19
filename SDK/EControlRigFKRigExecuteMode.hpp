#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EControlRigFKRigExecuteMode : uint8_t {
    Replace = 0,
    Additive = 1,
    Max = 2,
};
#pragma pack(pop)
