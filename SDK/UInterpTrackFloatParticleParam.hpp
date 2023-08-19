#pragma once
#include <cstdint>
#include "UInterpTrackFloatBase.hpp"
#pragma pack(push, 1)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase {
public:
    FName ParamName; // 0x90
    static UInterpTrackFloatParticleParam* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
