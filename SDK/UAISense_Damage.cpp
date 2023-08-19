#include "AActor.hpp"
#include "FAIDamageEvent.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
#include "UAISense_Damage.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAISense_Damage* UAISense_Damage::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense_Damage");
    return (UAISense_Damage*)res;
}
void UAISense_Damage::ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Damage.ReportDamageEvent"));
    struct Params_ReportDamageEvent {
        UObject* WorldContextObject; // 0x0
        AActor* DamagedActor; // 0x8
        AActor* Instigator; // 0x10
        float DamageAmount; // 0x18
        FVector EventLocation; // 0x1c
        FVector HitLocation; // 0x28
        FName Tag; // 0x34
    }; // Size: 0x3c
    Params_ReportDamageEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DamagedActor = (AActor*)DamagedActor;
    params.Instigator = (AActor*)Instigator;
    params.DamageAmount = (float)DamageAmount;
    params.EventLocation = (FVector)EventLocation;
    params.HitLocation = (FVector)HitLocation;
    params.Tag = (FName)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
