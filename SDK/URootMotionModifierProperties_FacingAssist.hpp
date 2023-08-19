#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "ERootMotionModTurnAssistUseDirection\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_FacingAssist : public URootMotionModifierProperties {
public:
    ERootMotionModTurnAssistUseDirection::Type UseDirection; // 0x30
    bool bFaceNegativeDirectionIfCloser; // 0x31
    bool bIgnoreTargetTracker; // 0x32
    bool bAllowDesiredDirectionUpdates; // 0x33
    bool bRotateRootTranslationIntoDesiredDirection; // 0x34
    ECustomInterpType::Type InterpType; // 0x35
    char pad_36[0x2];
    float InterpSpeed; // 0x38
    float InterpTime; // 0x3c
    bool bDebug; // 0x40
    char pad_41[0x7];
    static URootMotionModifierProperties_FacingAssist* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
