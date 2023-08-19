#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCameraInputMappings {
    FName WalkX; // 0x0
    FName WalkY; // 0x8
    FName LookX; // 0x10
    FName LookY; // 0x18
    FName MouseLookX; // 0x20
    FName MouseLookY; // 0x28
    FName TiltX; // 0x30
    FName TiltY; // 0x38
    FName RollCW; // 0x40
    FName RollCCW; // 0x48
    FName Dolly; // 0x50
    FName Truck; // 0x58
    FName PedestalUp; // 0x60
    FName PedestalDown; // 0x68
    FName ZoomIn; // 0x70
    FName ZoomOut; // 0x78
    FName FocusDistanceIncrease; // 0x80
    FName FocusDistanceDecrease; // 0x88
    FName QuickTurn; // 0x90
}; // Size: 0x98
#pragma pack(pop)
