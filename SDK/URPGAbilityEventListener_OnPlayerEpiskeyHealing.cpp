#include "AActor.hpp"
#include "UFunction.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnPlayerEpiskeyHealing.hpp"
URPGAbilityEventListener_OnPlayerEpiskeyHealing* URPGAbilityEventListener_OnPlayerEpiskeyHealing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnPlayerEpiskeyHealing");
    return (URPGAbilityEventListener_OnPlayerEpiskeyHealing*)res;
}
void URPGAbilityEventListener_OnPlayerEpiskeyHealing::OnEpiskeyHealing(AActor* Instigator, float InHealthChange, AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_OnPlayerEpiskeyHealing.OnEpiskeyHealing"));
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
