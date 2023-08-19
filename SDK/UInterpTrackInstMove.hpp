#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UInterpTrackInst.hpp"
#pragma pack(push, 1)
class UInterpTrackInstMove : public UInterpTrackInst {
public:
    FVector ResetLocation; // 0x28
    FRotator ResetRotation; // 0x34
    static UInterpTrackInstMove* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
