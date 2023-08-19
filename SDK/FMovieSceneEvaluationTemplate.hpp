#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMovieSceneEvaluationTemplateSerialNumber.hpp"
#include "FMovieSceneTemplateGenerationLedger.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationTemplate {
    char pad_0[0xa0];
    FGuid SequenceSignature; // 0xa0
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
    char pad_b4[0x4];
    FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
}; // Size: 0x160
#pragma pack(pop)
