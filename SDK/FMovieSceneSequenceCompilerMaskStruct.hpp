#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMovieSceneSequenceCompilerMaskStruct {
    uint8_t bHierarchy : 1; // 0x0
    uint8_t bEvaluationTemplate : 1; // 0x0
    uint8_t bEvaluationTemplateField : 1; // 0x0
    uint8_t bEntityComponentField : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
}; // Size: 0x1
#pragma pack(pop)
