#pragma once
#include <cstdint>
#include "ESectionEvaluationFlags.hpp"
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationFieldEntityMetaData {
    FString OverrideBoundPropertyPath; // 0x0
    FFrameNumber ForcedTime; // 0x10
    char pad_14[0x4];
    ESectionEvaluationFlags flags; // 0x18
    uint8_t bEvaluateInSequencePreRoll : 1; // 0x19
    uint8_t bEvaluateInSequencePostRoll : 1; // 0x19
    uint8_t pad_bitfield_19_2 : 6;
    char pad_1a[0x6];
}; // Size: 0x20
#pragma pack(pop)
