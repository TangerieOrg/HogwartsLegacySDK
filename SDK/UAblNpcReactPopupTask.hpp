#pragma once
#include <cstdint>
#include "EAblNpcReactPopupTaskType.hpp"
#include "UAblNpcPopupTask.hpp"
#pragma pack(push, 1)
class UAblNpcReactPopupTask : public UAblNpcPopupTask {
public:
    bool bUseReactionPopupType; // 0xc0
    EAblNpcReactPopupTaskType ReactPopupType; // 0xc1
    bool bInvertReactPopupTypeDirection; // 0xc2
    bool bConvertReactPopupTypeDirectionTo2D; // 0xc3
    bool bUseReactionVelocityIfSendTargetExists; // 0xc4
    bool bUseReactionDataMagnitude; // 0xc5
    bool bModifyGravityAtReactionEnd; // 0xc6
    char pad_c7[0x1];
    float GravityScaleAtReactionEnd; // 0xc8
    char pad_cc[0x4];
    static UAblNpcReactPopupTask* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
