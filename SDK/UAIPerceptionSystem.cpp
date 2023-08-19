#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAIStimulus.hpp"
#include "UAIPerceptionSystem.hpp"
#include "UAISense.hpp"
#include "UAISenseEvent.hpp"
#include "UAISubsystem.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAIPerceptionSystem::ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent"));
    struct Params_ReportPerceptionEvent {
        UObject* WorldContextObject; // 0x0
        UAISenseEvent* PerceptionEvent; // 0x8
    }; // Size: 0x10
    Params_ReportPerceptionEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PerceptionEvent = (UAISenseEvent*)PerceptionEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAIPerceptionSystem* UAIPerceptionSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIPerceptionSystem");
    return (UAIPerceptionSystem*)res;
}
bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(UObject* WorldContextObject, UClass* Sense, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource"));
    struct Params_RegisterPerceptionStimuliSource {
        UObject* WorldContextObject; // 0x0
        UClass* Sense; // 0x8
        AActor* Target; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_RegisterPerceptionStimuliSource params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Sense = (UClass*)Sense;
    params.Target = (AActor*)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAIPerceptionSystem::ReportEvent(UAISenseEvent* PerceptionEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionSystem.ReportEvent"));
    struct Params_ReportEvent {
        UAISenseEvent* PerceptionEvent; // 0x0
    }; // Size: 0x8
    Params_ReportEvent params{};
    params.PerceptionEvent = (UAISenseEvent*)PerceptionEvent;
    ProcessEvent(func, &params);
}
UClass* UAIPerceptionSystem::GetSenseClassForStimulus(UObject* WorldContextObject, FAIStimulus& Stimulus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus"));
    struct Params_GetSenseClassForStimulus {
        UObject* WorldContextObject; // 0x0
        FAIStimulus Stimulus; // 0x8
        char pad_44[0x4];
        UClass* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_GetSenseClassForStimulus params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Stimulus = (FAIStimulus)Stimulus;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stimulus = params.Stimulus;
    return (UClass*)params.ReturnValue;
}
void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay"));
    struct Params_OnPerceptionStimuliSourceEndPlay {
        AActor* Actor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnPerceptionStimuliSourceEndPlay params{};
    params.Actor = (AActor*)Actor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
