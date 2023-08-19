#pragma once
#include <cstdint>
#include "UCameraShakePattern.hpp"
#pragma pack(push, 1)
class UCompositeCameraShakePattern : public UCameraShakePattern {
public:
    TArray<UCameraShakePattern*> ChildPatterns; // 0x28
    char pad_38[0x10];
    static UCompositeCameraShakePattern* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
