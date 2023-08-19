#pragma once
#include <cstdint>
#include "EGameEvent_Intensity.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UAISense_GameEvent : public UAISense {
public:
    static UAISense_GameEvent* StaticClass();
    static void ReportGameEvent(UObject* WorldContextObject, FGameplayTagContainer TagContainer, FVector Location, EGameEvent_Intensity Intensity, float Duration, float Range, float Falloff, AActor* Instigator, bool bTrackBackToInstigator, AActor* Target, FName Name);
}; // Size: 0x80
#pragma pack(pop)
