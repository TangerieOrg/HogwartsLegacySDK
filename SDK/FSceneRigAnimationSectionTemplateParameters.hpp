#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FSceneRigAnimationParams.hpp"
#pragma pack(push, 1)
struct FSceneRigAnimationSectionTemplateParameters : public FSceneRigAnimationParams {
    FFrameNumber SectionStartTime; // 0x540
    FFrameNumber SectionEndTime; // 0x544
}; // Size: 0x548
#pragma pack(pop)
