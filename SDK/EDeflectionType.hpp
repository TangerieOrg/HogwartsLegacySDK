#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDeflectionType {
    Deflect_Block = 0,
    Deflect_Back = 1,
    Deflect_Object = 2,
    Deflect_Enemy = 3,
    Deflect_Random = 4,
    Deflect_MAX = 5,
};
#pragma pack(pop)
