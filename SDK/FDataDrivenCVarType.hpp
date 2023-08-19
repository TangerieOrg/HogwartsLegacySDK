#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FDataDrivenCVarType : uint8_t {
    CVarFloat = 0,
    CVarInt = 1,
    CVarBool = 2,
    FDataDrivenCVarType_MAX = 3,
};
#pragma pack(pop)
