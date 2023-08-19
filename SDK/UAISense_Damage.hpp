#pragma once
#include <cstdint>
#include "FAIDamageEvent.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UAISense_Damage : public UAISense {
public:
    TArray<FAIDamageEvent> RegisteredEvents; // 0x80
    static UAISense_Damage* StaticClass();
    static void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag);
}; // Size: 0x90
#pragma pack(pop)
