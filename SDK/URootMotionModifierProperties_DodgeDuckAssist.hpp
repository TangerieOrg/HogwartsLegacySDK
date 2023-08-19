#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_DodgeDuckAssist : public URootMotionModifierProperties {
public:
    bool bInstantRecovery; // 0x30
    char pad_31[0x3];
    float YawRecoverySpeed; // 0x34
    float TurnAssistSpeed; // 0x38
    ECustomInterpType::Type TurnAssistType; // 0x3c
    char pad_3d[0x3];
    static URootMotionModifierProperties_DodgeDuckAssist* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
