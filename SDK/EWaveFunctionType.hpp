#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EWaveFunctionType : uint8_t {
    Field_Wave_Cosine = 0,
    Field_Wave_Gaussian = 1,
    Field_Wave_Falloff = 2,
    Field_Wave_Decay = 3,
    Field_Wave_Max = 4,
};
#pragma pack(pop)
