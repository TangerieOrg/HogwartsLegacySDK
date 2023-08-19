#pragma once
#include <cstdint>
#include "AWorldInteractObject.hpp"
class USplineComponent;
class USphereComponent;
#pragma pack(push, 1)
class AFlyingBook : public AWorldInteractObject {
public:
    float BookSpeed; // 0x2e8
    float BookSpeedMod; // 0x2ec
    USplineComponent* MainSplineReference; // 0x2f0
    USphereComponent* BookRoot; // 0x2f8
    float SplineLength; // 0x300
    float DistanceAlongSpline; // 0x304
    static AFlyingBook* StaticClass();
    void Update(float DeltaTime);
    void RandomizeDistanceAlongSpline();
    void ActivateSpellReaction(bool newActivate);
}; // Size: 0x308
#pragma pack(pop)
