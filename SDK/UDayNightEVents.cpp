#include "AActor.hpp"
#include "EMoonPhaseName.hpp"
#include "FDateTime.hpp"
#include "FDateTimeInput.hpp"
#include "FDayNightEventsCurrentState.hpp"
#include "FDayNightGameTimeEvent.hpp"
#include "FDayNightMoonAltitudeEvent.hpp"
#include "FDayNightNormalizedTimeEvent.hpp"
#include "FDayNightSunAltitudeChangeEvent.hpp"
#include "FDayNightSunAltitudeEvent.hpp"
#include "FSolarNormalizedTime.hpp"
#include "FTimeInput.hpp"
#include "FTimespan.hpp"
#include "UActorComponent.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UDayNightEVents.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UDayNightEVents::DayNightEventsIsEditorWorld(UObject* WorldContextObject, bool& bIsEditorWorld) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightEventsIsEditorWorld"));
    struct Params_DayNightEventsIsEditorWorld {
        UObject* WorldContextObject; // 0x0
        bool bIsEditorWorld; // 0x8
    }; // Size: 0x9
    Params_DayNightEventsIsEditorWorld params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bIsEditorWorld = (bool)bIsEditorWorld;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsEditorWorld = params.bIsEditorWorld;
}
UDayNightEVents* UDayNightEVents::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightEVents");
    return (UDayNightEVents*)res;
}
float UDayNightEVents::NormalizedTimeAsFloat(FSolarNormalizedTime& NormalizedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.NormalizedTimeAsFloat"));
    struct Params_NormalizedTimeAsFloat {
        FSolarNormalizedTime NormalizedTime; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_NormalizedTimeAsFloat params{};
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NormalizedTime = params.NormalizedTime;
    return (float)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddComponentGameTimeEvent(UActorComponent* Component, FName EventName, FDayNightGameTimeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddComponentGameTimeEvent"));
    struct Params_DayNightAddComponentGameTimeEvent {
        UActorComponent* Component; // 0x0
        FName EventName; // 0x8
        FDayNightGameTimeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DayNightAddComponentGameTimeEvent params{};
    params.Component = (UActorComponent*)Component;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightGameTimeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UDayNightEVents::TimeInputAsTimespan(FTimeInput TimeInput) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.TimeInputAsTimespan"));
    struct Params_TimeInputAsTimespan {
        FTimeInput TimeInput; // 0x0
        char pad_c[0x4];
        FTimespan ReturnValue; // 0x10
    }; // Size: 0x18
    Params_TimeInputAsTimespan params{};
    params.TimeInput = (FTimeInput)TimeInput;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FString UDayNightEVents::MoonPhaseAsString(EMoonPhaseName& MoonPhase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.MoonPhaseAsString"));
    struct Params_MoonPhaseAsString {
        EMoonPhaseName MoonPhase; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_MoonPhaseAsString params{};
    params.MoonPhase = (EMoonPhaseName)MoonPhase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MoonPhase = params.MoonPhase;
    return (FString)params.ReturnValue;
}
bool UDayNightEVents::DayNightGlobalAddComponentReceiver(UActorComponent* Component, FName GlobalEventGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGlobalAddComponentReceiver"));
    struct Params_DayNightGlobalAddComponentReceiver {
        UActorComponent* Component; // 0x0
        FName GlobalEventGroup; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightGlobalAddComponentReceiver params{};
    params.Component = (UActorComponent*)Component;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UDayNightEVents::TimeInputAsFloat(FTimeInput TimeInput) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.TimeInputAsFloat"));
    struct Params_TimeInputAsFloat {
        FTimeInput TimeInput; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_TimeInputAsFloat params{};
    params.TimeInput = (FTimeInput)TimeInput;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UDayNightEVents::MoonPhaseAsName(EMoonPhaseName& MoonPhase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.MoonPhaseAsName"));
    struct Params_MoonPhaseAsName {
        EMoonPhaseName MoonPhase; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_MoonPhaseAsName params{};
    params.MoonPhase = (EMoonPhaseName)MoonPhase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MoonPhase = params.MoonPhase;
    return (FName)params.ReturnValue;
}
FTimespan UDayNightEVents::NormalizedTimeAsTimespan(FSolarNormalizedTime& NormalizedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.NormalizedTimeAsTimespan"));
    struct Params_NormalizedTimeAsTimespan {
        FSolarNormalizedTime NormalizedTime; // 0x0
        char pad_4[0x4];
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_NormalizedTimeAsTimespan params{};
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NormalizedTime = params.NormalizedTime;
    return (FTimespan)params.ReturnValue;
}
bool UDayNightEVents::DayNightRemoveAllGlobalEvents(UObject* WorldContextObject, FName GlobalEventGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightRemoveAllGlobalEvents"));
    struct Params_DayNightRemoveAllGlobalEvents {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightRemoveAllGlobalEvents params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UDayNightEVents::NormalizedTimeAsString(FSolarNormalizedTime& NormalizedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.NormalizedTimeAsString"));
    struct Params_NormalizedTimeAsString {
        FSolarNormalizedTime NormalizedTime; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_NormalizedTimeAsString params{};
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NormalizedTime = params.NormalizedTime;
    return (FString)params.ReturnValue;
}
bool UDayNightEVents::DayNightRemoveGlobalEvents(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightRemoveGlobalEvents"));
    struct Params_DayNightRemoveGlobalEvents {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        FName EventName; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_DayNightRemoveGlobalEvents params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    params.EventName = (FName)EventName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightRemoveComponentEvents(UActorComponent* Component, FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightRemoveComponentEvents"));
    struct Params_DayNightRemoveComponentEvents {
        UActorComponent* Component; // 0x0
        FName EventName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightRemoveComponentEvents params{};
    params.Component = (UActorComponent*)Component;
    params.EventName = (FName)EventName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightRemoveAllComponentEvents(UActorComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightRemoveAllComponentEvents"));
    struct Params_DayNightRemoveAllComponentEvents {
        UActorComponent* Component; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DayNightRemoveAllComponentEvents params{};
    params.Component = (UActorComponent*)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightGlobalRemoveAllReceivers(UObject* WorldContextObject, FName GlobalEventGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGlobalRemoveAllReceivers"));
    struct Params_DayNightGlobalRemoveAllReceivers {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightGlobalRemoveAllReceivers params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightRemoveAllActorEvents(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightRemoveAllActorEvents"));
    struct Params_DayNightRemoveAllActorEvents {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DayNightRemoveAllActorEvents params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightRemoveActorEvents(AActor* Actor, FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightRemoveActorEvents"));
    struct Params_DayNightRemoveActorEvents {
        AActor* Actor; // 0x0
        FName EventName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightRemoveActorEvents params{};
    params.Actor = (AActor*)Actor;
    params.EventName = (FName)EventName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightGlobalRemoveComponentReceiver(UActorComponent* Component, FName GlobalEventGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGlobalRemoveComponentReceiver"));
    struct Params_DayNightGlobalRemoveComponentReceiver {
        UActorComponent* Component; // 0x0
        FName GlobalEventGroup; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightGlobalRemoveComponentReceiver params{};
    params.Component = (UActorComponent*)Component;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightGlobalRemoveActorReceiver(AActor* Actor, FName GlobalEventGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGlobalRemoveActorReceiver"));
    struct Params_DayNightGlobalRemoveActorReceiver {
        AActor* Actor; // 0x0
        FName GlobalEventGroup; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightGlobalRemoveActorReceiver params{};
    params.Actor = (AActor*)Actor;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightGlobalAddActorReceiver(AActor* Actor, FName GlobalEventGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGlobalAddActorReceiver"));
    struct Params_DayNightGlobalAddActorReceiver {
        AActor* Actor; // 0x0
        FName GlobalEventGroup; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightGlobalAddActorReceiver params{};
    params.Actor = (AActor*)Actor;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDayNightEVents::DayNightGetGlobalSunsetEvent(FName& Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGetGlobalSunsetEvent"));
    struct Params_DayNightGetGlobalSunsetEvent {
        FName Event; // 0x0
    }; // Size: 0x8
    Params_DayNightGetGlobalSunsetEvent params{};
    params.Event = (FName)Event;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Event = params.Event;
}
void UDayNightEVents::DayNightGetGlobalSunriseSunsetEventGroup(FName& EventGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGetGlobalSunriseSunsetEventGroup"));
    struct Params_DayNightGetGlobalSunriseSunsetEventGroup {
        FName EventGroup; // 0x0
    }; // Size: 0x8
    Params_DayNightGetGlobalSunriseSunsetEventGroup params{};
    params.EventGroup = (FName)EventGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EventGroup = params.EventGroup;
}
void UDayNightEVents::DayNightGetGlobalSunriseEvent(FName& Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightGetGlobalSunriseEvent"));
    struct Params_DayNightGetGlobalSunriseEvent {
        FName Event; // 0x0
    }; // Size: 0x8
    Params_DayNightGetGlobalSunriseEvent params{};
    params.Event = (FName)Event;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Event = params.Event;
}
void UDayNightEVents::DayNightEventsLightsCanStartOn(UObject* WorldContextObject, bool& bLightsCanStartOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightEventsLightsCanStartOn"));
    struct Params_DayNightEventsLightsCanStartOn {
        UObject* WorldContextObject; // 0x0
        bool bLightsCanStartOn; // 0x8
    }; // Size: 0x9
    Params_DayNightEventsLightsCanStartOn params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bLightsCanStartOn = (bool)bLightsCanStartOn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bLightsCanStartOn = params.bLightsCanStartOn;
}
void UDayNightEVents::DayNightEventsCurrentState(UObject* WorldContextObject, FDayNightEventsCurrentState& CurrentState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightEventsCurrentState"));
    struct Params_DayNightEventsCurrentState {
        UObject* WorldContextObject; // 0x0
        FDayNightEventsCurrentState CurrentState; // 0x8
    }; // Size: 0x38
    Params_DayNightEventsCurrentState params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CurrentState = (FDayNightEventsCurrentState)CurrentState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CurrentState = params.CurrentState;
}
bool UDayNightEVents::DayNightBeginPlayComponentEvents(UActorComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightBeginPlayComponentEvents"));
    struct Params_DayNightBeginPlayComponentEvents {
        UActorComponent* Component; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DayNightBeginPlayComponentEvents params{};
    params.Component = (UActorComponent*)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightBeginPlayActorEvents(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightBeginPlayActorEvents"));
    struct Params_DayNightBeginPlayActorEvents {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DayNightBeginPlayActorEvents params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddGlobalTimeEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightNormalizedTimeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddGlobalTimeEvent"));
    struct Params_DayNightAddGlobalTimeEvent {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        FName EventName; // 0x10
        FDayNightNormalizedTimeEvent DayNightEvent; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_DayNightAddGlobalTimeEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightNormalizedTimeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddGlobalSunEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightSunAltitudeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddGlobalSunEvent"));
    struct Params_DayNightAddGlobalSunEvent {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        FName EventName; // 0x10
        FDayNightSunAltitudeEvent DayNightEvent; // 0x18
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DayNightAddGlobalSunEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightSunAltitudeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddGlobalSunChangeEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightSunAltitudeChangeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddGlobalSunChangeEvent"));
    struct Params_DayNightAddGlobalSunChangeEvent {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        FName EventName; // 0x10
        FDayNightSunAltitudeChangeEvent DayNightEvent; // 0x18
        bool ReturnValue; // 0x2c
    }; // Size: 0x2d
    Params_DayNightAddGlobalSunChangeEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightSunAltitudeChangeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddGlobalMoonEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightMoonAltitudeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddGlobalMoonEvent"));
    struct Params_DayNightAddGlobalMoonEvent {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        FName EventName; // 0x10
        FDayNightMoonAltitudeEvent DayNightEvent; // 0x18
        bool ReturnValue; // 0x2c
    }; // Size: 0x2d
    Params_DayNightAddGlobalMoonEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightMoonAltitudeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddGlobalGameTimeEvent(UObject* WorldContextObject, FName GlobalEventGroup, FName EventName, FDayNightGameTimeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddGlobalGameTimeEvent"));
    struct Params_DayNightAddGlobalGameTimeEvent {
        UObject* WorldContextObject; // 0x0
        FName GlobalEventGroup; // 0x8
        FName EventName; // 0x10
        FDayNightGameTimeEvent DayNightEvent; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_DayNightAddGlobalGameTimeEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalEventGroup = (FName)GlobalEventGroup;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightGameTimeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddComponentSunEvent(UActorComponent* Component, FName EventName, FDayNightSunAltitudeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddComponentSunEvent"));
    struct Params_DayNightAddComponentSunEvent {
        UActorComponent* Component; // 0x0
        FName EventName; // 0x8
        FDayNightSunAltitudeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_DayNightAddComponentSunEvent params{};
    params.Component = (UActorComponent*)Component;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightSunAltitudeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddComponentTimeEvent(UActorComponent* Component, FName EventName, FDayNightNormalizedTimeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddComponentTimeEvent"));
    struct Params_DayNightAddComponentTimeEvent {
        UActorComponent* Component; // 0x0
        FName EventName; // 0x8
        FDayNightNormalizedTimeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DayNightAddComponentTimeEvent params{};
    params.Component = (UActorComponent*)Component;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightNormalizedTimeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddComponentSunChangeEvent(UActorComponent* Component, FName EventName, FDayNightSunAltitudeChangeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddComponentSunChangeEvent"));
    struct Params_DayNightAddComponentSunChangeEvent {
        UActorComponent* Component; // 0x0
        FName EventName; // 0x8
        FDayNightSunAltitudeChangeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_DayNightAddComponentSunChangeEvent params{};
    params.Component = (UActorComponent*)Component;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightSunAltitudeChangeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddComponentMoonEvent(UActorComponent* Component, FName EventName, FDayNightMoonAltitudeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddComponentMoonEvent"));
    struct Params_DayNightAddComponentMoonEvent {
        UActorComponent* Component; // 0x0
        FName EventName; // 0x8
        FDayNightMoonAltitudeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_DayNightAddComponentMoonEvent params{};
    params.Component = (UActorComponent*)Component;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightMoonAltitudeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddActorSunChangeEvent(AActor* Actor, FName EventName, FDayNightSunAltitudeChangeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddActorSunChangeEvent"));
    struct Params_DayNightAddActorSunChangeEvent {
        AActor* Actor; // 0x0
        FName EventName; // 0x8
        FDayNightSunAltitudeChangeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_DayNightAddActorSunChangeEvent params{};
    params.Actor = (AActor*)Actor;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightSunAltitudeChangeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddActorTimeEvent(AActor* Actor, FName EventName, FDayNightNormalizedTimeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddActorTimeEvent"));
    struct Params_DayNightAddActorTimeEvent {
        AActor* Actor; // 0x0
        FName EventName; // 0x8
        FDayNightNormalizedTimeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DayNightAddActorTimeEvent params{};
    params.Actor = (AActor*)Actor;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightNormalizedTimeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddActorSunEvent(AActor* Actor, FName EventName, FDayNightSunAltitudeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddActorSunEvent"));
    struct Params_DayNightAddActorSunEvent {
        AActor* Actor; // 0x0
        FName EventName; // 0x8
        FDayNightSunAltitudeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_DayNightAddActorSunEvent params{};
    params.Actor = (AActor*)Actor;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightSunAltitudeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddActorMoonEvent(AActor* Actor, FName EventName, FDayNightMoonAltitudeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddActorMoonEvent"));
    struct Params_DayNightAddActorMoonEvent {
        AActor* Actor; // 0x0
        FName EventName; // 0x8
        FDayNightMoonAltitudeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_DayNightAddActorMoonEvent params{};
    params.Actor = (AActor*)Actor;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightMoonAltitudeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDayNightEVents::DayNightAddActorGameTimeEvent(AActor* Actor, FName EventName, FDayNightGameTimeEvent DayNightEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DayNightAddActorGameTimeEvent"));
    struct Params_DayNightAddActorGameTimeEvent {
        AActor* Actor; // 0x0
        FName EventName; // 0x8
        FDayNightGameTimeEvent DayNightEvent; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DayNightAddActorGameTimeEvent params{};
    params.Actor = (AActor*)Actor;
    params.EventName = (FName)EventName;
    params.DayNightEvent = (FDayNightGameTimeEvent)DayNightEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FDateTime UDayNightEVents::DateTimeInputAsDateTime(FDateTimeInput DateTimeInput, bool& Valid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEVents.DateTimeInputAsDateTime"));
    struct Params_DateTimeInputAsDateTime {
        FDateTimeInput DateTimeInput; // 0x0
        bool Valid; // 0x18
        char pad_19[0x7];
        FDateTime ReturnValue; // 0x20
    }; // Size: 0x28
    Params_DateTimeInputAsDateTime params{};
    params.DateTimeInput = (FDateTimeInput)DateTimeInput;
    params.Valid = (bool)Valid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Valid = params.Valid;
    return (FDateTime)params.ReturnValue;
}
