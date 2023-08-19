#pragma once
#include <cstdint>
#include "FBoolTrackKey.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackBoolProp : public UInterpTrack {
public:
    TArray<FBoolTrackKey> BoolTrack; // 0x70
    FName PropertyName; // 0x80
    static UInterpTrackBoolProp* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
