#pragma once
#include <cstdint>
#include "EInterpMoveAxis.hpp"
#include "FInterpLookupTrack.hpp"
#include "UInterpTrackFloatBase.hpp"
#pragma pack(push, 1)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase {
public:
    EInterpMoveAxis MoveAxis; // 0x90
    char pad_91[0x7];
    FInterpLookupTrack LookupTrack; // 0x98
    static UInterpTrackMoveAxis* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
