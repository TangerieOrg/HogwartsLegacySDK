#pragma once
#include <cstdint>
#include "UStateEffectComponent.hpp"
class AActor;
class UTransformationOverlandComponent;
#pragma pack(push, 1)
class UTransformedOverlandComponent : public UStateEffectComponent {
public:
    AActor* OriginalActor; // 0x190
    UTransformationOverlandComponent* OriginalComponent; // 0x198
    char pad_1a0[0x10];
    static UTransformedOverlandComponent* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
