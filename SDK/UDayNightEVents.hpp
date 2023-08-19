#pragma once
#include <cstdint>
#include "EMoonPhaseName.hpp"
#include "FDateTime.hpp"
#include "FDateTimeInput.hpp"
#include "FDayNightGameTimeEvent.hpp"
#include "FDayNightMoonAltitudeEvent.hpp"
#include "FDayNightNormalizedTimeEvent.hpp"
#include "FDayNightSunAltitudeChangeEvent.hpp"
#include "FDayNightSunAltitudeEvent.hpp"
#include "FTimeInput.hpp"
#include "FTimespan.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FSolarNormalizedTime;
class UObject;
class UActorComponent;
class AActor;
struct FDayNightEventsCurrentState;
#pragma pack(push, 1)
class UDayNightEVents : public UBlueprintFunctionLibrary {
public:
    static UDayNightEVents* StaticClass();
    static FTimespan TimeInputAsTimespan(FTimeInput TimeInput);
    static float TimeInputAsFloat(FTimeInput TimeInput);
    static FTimespan NormalizedTimeAsTimespan(FSolarNormalizedTime& NormalizedTime);
    static FString NormalizedTimeAsString(FSolarNormalizedTime& NormalizedTime);
    static float NormalizedTimeAsFloat(FSolarNormalizedTime& NormalizedTime);
    static FString MoonPhaseAsString(EMoonPhaseName& MoonPhase);
    static FName MoonPhaseAsName(EMoonPhaseName& MoonPhase);
    static bool DayNightRemoveGlobalEvents(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName);
    static bool DayNightRemoveComponentEvents(UActorComponent* Component, FName EventName);
    static bool DayNightRemoveAllGlobalEvents(UObject* WorldContextObject, FName GlobalEventGroup);
    static bool DayNightRemoveAllComponentEvents(UActorComponent* Component);
    static bool DayNightRemoveAllActorEvents(AActor* Actor);
    static bool DayNightRemoveActorEvents(AActor* Actor, FName EventName);
    static bool DayNightGlobalRemoveComponentReceiver(UActorComponent* Component, FName GlobalEventGroup);
    static bool DayNightGlobalRemoveAllReceivers(UObject* WorldContextObject, FName GlobalEventGroup);
    static bool DayNightGlobalRemoveActorReceiver(AActor* Actor, FName GlobalEventGroup);
    static bool DayNightGlobalAddComponentReceiver(UActorComponent* Component, FName GlobalEventGroup);
    static bool DayNightGlobalAddActorReceiver(AActor* Actor, FName GlobalEventGroup);
    static void DayNightGetGlobalSunsetEvent(FName& Event);
    static void DayNightGetGlobalSunriseSunsetEventGroup(FName& EventGroup);
    static void DayNightGetGlobalSunriseEvent(FName& Event);
    static void DayNightEventsLightsCanStartOn(UObject* WorldContextObject, bool& bLightsCanStartOn);
    static void DayNightEventsIsEditorWorld(UObject* WorldContextObject, bool& bIsEditorWorld);
    static void DayNightEventsCurrentState(UObject* WorldContextObject, FDayNightEventsCurrentState& CurrentState);
    static bool DayNightBeginPlayComponentEvents(UActorComponent* Component);
    static bool DayNightBeginPlayActorEvents(AActor* Actor);
    static bool DayNightAddGlobalTimeEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightNormalizedTimeEvent DayNightEvent);
    static bool DayNightAddGlobalSunEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightSunAltitudeEvent DayNightEvent);
    static bool DayNightAddGlobalSunChangeEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightSunAltitudeChangeEvent DayNightEvent);
    static bool DayNightAddGlobalMoonEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightMoonAltitudeEvent DayNightEvent);
    static bool DayNightAddGlobalGameTimeEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightGameTimeEvent DayNightEvent);
    static bool DayNightAddComponentTimeEvent(UActorComponent* Component, FName EventName, FDayNightNormalizedTimeEvent DayNightEvent);
    static bool DayNightAddComponentSunEvent(UActorComponent* Component, FName EventName, FDayNightSunAltitudeEvent DayNightEvent);
    static bool DayNightAddComponentSunChangeEvent(UActorComponent* Component, FName EventName, FDayNightSunAltitudeChangeEvent DayNightEvent);
    static bool DayNightAddComponentMoonEvent(UActorComponent* Component, FName EventName, FDayNightMoonAltitudeEvent DayNightEvent);
    static bool DayNightAddComponentGameTimeEvent(UActorComponent* Component, FName EventName, FDayNightGameTimeEvent DayNightEvent);
    static bool DayNightAddActorTimeEvent(AActor* Actor, FName EventName, FDayNightNormalizedTimeEvent DayNightEvent);
    static bool DayNightAddActorSunEvent(AActor* Actor, FName EventName, FDayNightSunAltitudeEvent DayNightEvent);
    static bool DayNightAddActorSunChangeEvent(AActor* Actor, FName EventName, FDayNightSunAltitudeChangeEvent DayNightEvent);
    static bool DayNightAddActorMoonEvent(AActor* Actor, FName EventName, FDayNightMoonAltitudeEvent DayNightEvent);
    static bool DayNightAddActorGameTimeEvent(AActor* Actor, FName EventName, FDayNightGameTimeEvent DayNightEvent);
    static FDateTime DateTimeInputAsDateTime(FDateTimeInput DateTimeInput, bool& Valid);
}; // Size: 0x28
#pragma pack(pop)
