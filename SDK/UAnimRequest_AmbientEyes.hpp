#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPoseSampler_AmbientEyes;
#pragma pack(push, 1)
class UAnimRequest_AmbientEyes : public UObject {
public:
    char pad_28[0x8];
    UPoseSampler_AmbientEyes* PoseSampler; // 0x30
    static UAnimRequest_AmbientEyes* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
