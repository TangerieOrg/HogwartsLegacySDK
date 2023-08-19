#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_BoneUnscaled : public UTransformProvider {
public:
    FName BoneName; // 0x28
    static UTransform_BoneUnscaled* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
