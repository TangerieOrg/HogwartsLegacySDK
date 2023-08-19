#pragma once
#include <cstdint>
#include "FAINoiseEvent.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UAISense_Hearing : public UAISense {
public:
    TArray<FAINoiseEvent> NoiseEvents; // 0x80
    float SpeedOfSoundSq; // 0x90
    char pad_94[0x54];
    static UAISense_Hearing* StaticClass();
    static void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
}; // Size: 0xe8
#pragma pack(pop)
