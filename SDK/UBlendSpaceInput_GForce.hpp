#pragma once
#include <cstdint>
#include "EAxisMapping.hpp"
#include "UBlendSpaceInputProvider.hpp"
class UActorProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UBlendSpaceInput_GForce : public UBlendSpaceInputProvider {
public:
    UActorProvider* ActorToGetAccelerationFrom; // 0x28
    UFloatProvider* Alpha; // 0x30
    EAxisMapping HorizontalAxis; // 0x38
    EAxisMapping VerticalAxis; // 0x39
    char pad_3a[0xe];
    static UBlendSpaceInput_GForce* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
