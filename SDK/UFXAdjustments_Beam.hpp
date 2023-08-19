#pragma once
#include <cstdint>
#include "EMultiFXBeamSource.hpp"
#include "EMultiFXLocation.hpp"
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_Beam : public UFXAdjustments {
public:
    EMultiFXBeamSource SourceObject; // 0x28
    EMultiFXLocation SourceLocation; // 0x29
    EMultiFXLocation TargetLocation; // 0x2a
    char pad_2b[0x5];
    static UFXAdjustments_Beam* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
