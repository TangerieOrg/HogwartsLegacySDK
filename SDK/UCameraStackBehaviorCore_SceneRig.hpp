#pragma once
#include <cstdint>
#include "UCameraStackBehaviorCore.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCore_SceneRig : public UCameraStackBehaviorCore {
public:
    bool bCounteractAccumulatedRotation; // 0x50
    bool bMaintainArmOrigin; // 0x51
    bool bAlignArmWithAccumulatedRotation; // 0x52
    char pad_53[0xd5];
    static UCameraStackBehaviorCore_SceneRig* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
