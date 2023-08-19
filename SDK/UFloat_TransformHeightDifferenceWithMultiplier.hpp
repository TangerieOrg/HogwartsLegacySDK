#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UFloat_TransformHeightDifferenceWithMultiplier : public UFloatProvider {
public:
    UTransformProvider* TransformA; // 0x28
    UTransformProvider* TransformB; // 0x30
    UFloatProvider* UpMultiplier; // 0x38
    UFloatProvider* DownMultiplier; // 0x40
    static UFloat_TransformHeightDifferenceWithMultiplier* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
