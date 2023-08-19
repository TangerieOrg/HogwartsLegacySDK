#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELocationBoneSocketSelectionMethod : uint8_t {
    BONESOCKETSEL_Sequential = 0,
    BONESOCKETSEL_Random = 1,
    BONESOCKETSEL_MAX = 2,
};
#pragma pack(pop)
