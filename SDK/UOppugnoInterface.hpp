#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UOppugnoInterface : public UInterface {
public:
    static UOppugnoInterface* StaticClass();
    void OnOppugnoThrow(AActor* Instigator, AActor* Target, FVector Velocity);
    void OnOppugnoPull(AActor* Instigator);
    void OnOppugnoImpact(AActor* Instigator, AActor* Target, AActor* HitObject);
    void OnOppugnoHold(AActor* Instigator);
    void OnOppugnoEnd(AActor* Instigator);
    void OnHitByOppugnoImpact(AActor* Instigator, AActor* Object);
}; // Size: 0x28
#pragma pack(pop)
