#include "AActor.hpp"
#include "UFunction.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_FillFocusMeterOnPlayerEpiskey.hpp"
URPGTriggerEffect_FillFocusMeterOnPlayerEpiskey* URPGTriggerEffect_FillFocusMeterOnPlayerEpiskey::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_FillFocusMeterOnPlayerEpiskey");
    return (URPGTriggerEffect_FillFocusMeterOnPlayerEpiskey*)res;
}
void URPGTriggerEffect_FillFocusMeterOnPlayerEpiskey::OnEpiskeyHealing(AActor* Instigator, float InHealthChange, AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGTriggerEffect_FillFocusMeterOnPlayerEpiskey.OnEpiskeyHealing"));
    struct Params_OnEpiskeyHealing {
        AActor* Instigator; // 0x0
        float InHealthChange; // 0x8
        char pad_c[0x4];
        AActor* TargetActor; // 0x10
    }; // Size: 0x18
    Params_OnEpiskeyHealing params{};
    params.Instigator = (AActor*)Instigator;
    params.InHealthChange = (float)InHealthChange;
    params.TargetActor = (AActor*)TargetActor;
    ProcessEvent(func, &params);
}
