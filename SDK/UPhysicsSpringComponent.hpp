#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UPhysicsSpringComponent : public USceneComponent {
public:
    float SpringLengthAtRest; // 0x220
    float SpringRadius; // 0x224
    ECollisionChannel SpringChannel; // 0x228
    bool bIgnoreSelf; // 0x229
    char pad_22a[0x2];
    float SpringCompression; // 0x22c
    char pad_230[0x10];
    static UPhysicsSpringComponent* StaticClass();
    FVector GetSpringRestingPoint();
    FVector GetSpringDirection();
    FVector GetSpringCurrentEndPoint();
    float GetNormalizedCompressionScalar();
}; // Size: 0x240
#pragma pack(pop)
