#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECameraStackSplineType.hpp"
class USplineComponent;
#pragma pack(push, 1)
class ACameraStackSplineActor : public AActor {
public:
    ECameraStackSplineType SplineType; // 0x248
    char pad_249[0x7];
    ACameraStackSplineActor* RailPairedSplineActor; // 0x250
    bool bUseDifferentSplineWhenStartingAtEnd; // 0x258
    char pad_259[0x7];
    ACameraStackSplineActor* RailPairedSplineActorStartingAtEnd; // 0x260
    USplineComponent* SplineComponent; // 0x268
    static ACameraStackSplineActor* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
