#include "AActor.hpp"
#include "FAIMagicEvent.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
#include "UAISense_Magic.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAISense_Magic* UAISense_Magic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_Magic");
    return (UAISense_Magic*)res;
}
void UAISense_Magic::ReportMagicEvent(UObject* WorldContextObject, FVector MagicLocation, float Power, AActor* Instigator, float MaxRange, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AISense_Magic.ReportMagicEvent"));
    struct Params_ReportMagicEvent {
        UObject* WorldContextObject; // 0x0
        FVector MagicLocation; // 0x8
        float Power; // 0x14
        AActor* Instigator; // 0x18
        float MaxRange; // 0x20
        FName Tag; // 0x24
    }; // Size: 0x2c
    Params_ReportMagicEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.MagicLocation = (FVector)MagicLocation;
    params.Power = (float)Power;
    params.Instigator = (AActor*)Instigator;
    params.MaxRange = (float)MaxRange;
    params.Tag = (FName)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
