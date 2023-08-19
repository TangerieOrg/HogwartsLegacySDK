#include "AActor.hpp"
#include "FAINoiseEvent.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
#include "UAISense_Hearing.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAISense_Hearing* UAISense_Hearing::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense_Hearing");
    return (UAISense_Hearing*)res;
}
void UAISense_Hearing::ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent"));
    struct Params_ReportNoiseEvent {
        UObject* WorldContextObject; // 0x0
        FVector NoiseLocation; // 0x8
        float Loudness; // 0x14
        AActor* Instigator; // 0x18
        float MaxRange; // 0x20
        FName Tag; // 0x24
    }; // Size: 0x2c
    Params_ReportNoiseEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NoiseLocation = (FVector)NoiseLocation;
    params.Loudness = (float)Loudness;
    params.Instigator = (AActor*)Instigator;
    params.MaxRange = (float)MaxRange;
    params.Tag = (FName)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
