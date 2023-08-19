#pragma once
#include <cstdint>
#include "UObject.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UMovieSceneEasingExternalCurve : public UObject {
public:
    char pad_28[0x8];
    UCurveFloat* Curve; // 0x30
    static UMovieSceneEasingExternalCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
