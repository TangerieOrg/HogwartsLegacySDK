#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBoneGetterSetterMode : uint8_t {
    LocalSpace = 0,
    GlobalSpace = 1,
    Max = 2,
};
#pragma pack(pop)
