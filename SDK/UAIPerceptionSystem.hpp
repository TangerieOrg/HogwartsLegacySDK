#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "UAISubsystem.hpp"
class UAISense;
class UObject;
class UAISenseEvent;
class UClass;
class AActor;
struct FAIStimulus;
#pragma pack(push, 1)
class UAIPerceptionSystem : public UAISubsystem {
public:
    char pad_38[0x50];
    TArray<UAISense*> Senses; // 0x88
    float PerceptionAgingRate; // 0x98
    char pad_9c[0x94];
    static UAIPerceptionSystem* StaticClass();
    static void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);
    void ReportEvent(UAISenseEvent* PerceptionEvent);
    static bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, UClass* Sense, AActor* Target);
    void OnPerceptionStimuliSourceEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason);
    static UClass* GetSenseClassForStimulus(UObject* WorldContextObject, FAIStimulus& Stimulus);
}; // Size: 0x130
#pragma pack(pop)
