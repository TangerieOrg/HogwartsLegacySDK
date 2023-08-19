#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UFloat_TransformDistance : public UFloatProvider {
public:
    UTransformProvider* TransformA; // 0x28
    UTransformProvider* TransformB; // 0x30
    static UFloat_TransformDistance* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
