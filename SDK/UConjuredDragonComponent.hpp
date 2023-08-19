#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class AActor;
struct FVector;
#pragma pack(push, 1)
class UConjuredDragonComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    static UConjuredDragonComponent* StaticClass();
    void HeadTrackActor(AActor* InActor);
    void EndEncounter();
    void BeginEncounter();
    void ApproachVector(FVector& Out, FVector& curr, FVector& Dest, float Rate, float dt);
    float ApproachScalar(float curr, float Dest, float Rate, float dt);
}; // Size: 0xd0
#pragma pack(pop)
