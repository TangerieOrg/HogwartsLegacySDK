#pragma once
#include <cstdint>
#include "FInputBlendPose.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBoneMaskFilter : public UObject {
public:
    TArray<FInputBlendPose> BlendPoses; // 0x28
    static UBoneMaskFilter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
