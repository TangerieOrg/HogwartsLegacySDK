#pragma once
#include <cstdint>
#include "UCogGroupFocusDirection.hpp"
#pragma pack(push, 1)
class UCogGroupFocusDirection_MovementCameraHybrid : public UCogGroupFocusDirection {
public:
    bool bRequiredCameraMovementToUseCameraFocus; // 0x28
    bool bCameraDirectionHasPriority; // 0x29
    char pad_2a[0x6];
    static UCogGroupFocusDirection_MovementCameraHybrid* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
