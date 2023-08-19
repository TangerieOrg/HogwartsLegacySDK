#pragma once
#include <cstdint>
#include "FAIMagicEvent.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UAISense_Magic : public UAISense {
public:
    TArray<FAIMagicEvent> MagicEvents; // 0x80
    float SpeedOfMagicFeelSq; // 0x90
    char pad_94[0x54];
    static UAISense_Magic* StaticClass();
    static void ReportMagicEvent(UObject* WorldContextObject, FVector MagicLocation, float Power, AActor* Instigator, float MaxRange, FName Tag);
}; // Size: 0xe8
#pragma pack(pop)
