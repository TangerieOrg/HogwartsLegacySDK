#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraMipMapGeneration : uint8_t {
    Disabled = 0,
    PostStage = 1,
    PostSimulate = 2,
    ENiagaraMipMapGeneration_MAX = 3,
};
#pragma pack(pop)
