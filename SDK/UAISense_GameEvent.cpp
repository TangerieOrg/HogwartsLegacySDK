#include "AActor.hpp"
#include "EGameEvent_Intensity.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
#include "UAISense_GameEvent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAISense_GameEvent* UAISense_GameEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_GameEvent");
    return (UAISense_GameEvent*)res;
}
void UAISense_GameEvent::ReportGameEvent(UObject* WorldContextObject, FGameplayTagContainer TagContainer, FVector Location, EGameEvent_Intensity Intensity, float Duration, float Range, float Falloff, AActor* Instigator, bool bTrackBackToInstigator, AActor* Target, FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AISense_GameEvent.ReportGameEvent"));
    struct Params_ReportGameEvent {
        UObject* WorldContextObject; // 0x0
        FGameplayTagContainer TagContainer; // 0x8
        FVector Location; // 0x28
        EGameEvent_Intensity Intensity; // 0x34
        char pad_35[0x3];
        float Duration; // 0x38
        float Range; // 0x3c
        float Falloff; // 0x40
        char pad_44[0x4];
        AActor* Instigator; // 0x48
        bool bTrackBackToInstigator; // 0x50
        char pad_51[0x7];
        AActor* Target; // 0x58
        FName Name; // 0x60
    }; // Size: 0x68
    Params_ReportGameEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.Location = (FVector)Location;
    params.Intensity = (EGameEvent_Intensity)Intensity;
    params.Duration = (float)Duration;
    params.Range = (float)Range;
    params.Falloff = (float)Falloff;
    params.Instigator = (AActor*)Instigator;
    params.bTrackBackToInstigator = (bool)bTrackBackToInstigator;
    params.Target = (AActor*)Target;
    params.Name = (FName)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
