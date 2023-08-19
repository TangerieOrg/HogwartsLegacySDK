#pragma once
#include <cstdint>
#include "FLEDFadeEffectProperty.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULEDFadeEffect : public UObject {
public:
    TArray<FLEDFadeEffectProperty> FadeEffectProperties; // 0x28
    bool Loop; // 0x38
    bool SetOnEnd; // 0x39
    char pad_3a[0xe];
    static ULEDFadeEffect* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
