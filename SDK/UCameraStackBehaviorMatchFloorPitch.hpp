#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMatchFloorPitch : public UCameraStackBehaviorBlend {
public:
    bool bDrawDebug; // 0x1b8
    char pad_1b9[0x3];
    FName TraceTagName; // 0x1bc
    float TraceLength; // 0x1c4
    float TraceHeight; // 0x1c8
    float TraceDepth; // 0x1cc
    float PitchScaleUp; // 0x1d0
    float PitchScaleDown; // 0x1d4
    float PitchScaleDrop; // 0x1d8
    float ProbeSize; // 0x1dc
    ECollisionChannel ProbeChannel; // 0x1e0
    char pad_1e1[0x3];
    float InterpSpeed; // 0x1e4
    float InterpSpeedDrop; // 0x1e8
    char pad_1ec[0x1c];
    static UCameraStackBehaviorMatchFloorPitch* StaticClass();
}; // Size: 0x208
#pragma pack(pop)
