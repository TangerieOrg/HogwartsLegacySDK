#include "FMunitionToInstigatorData.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URPGAbilityCustomTargetEventListener.hpp"
#include "URPGAbilityEventListener_OnTargetHitWithMunition.hpp"
URPGAbilityEventListener_OnTargetHitWithMunition* URPGAbilityEventListener_OnTargetHitWithMunition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnTargetHitWithMunition");
    return (URPGAbilityEventListener_OnTargetHitWithMunition*)res;
}
void URPGAbilityEventListener_OnTargetHitWithMunition::OnMunitionHit(UObject* Caller, FMunitionToInstigatorData& MunitionData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_OnTargetHitWithMunition.OnMunitionHit"));
    struct Params_OnMunitionHit {
        UObject* Caller; // 0x0
        FMunitionToInstigatorData MunitionData; // 0x8
    }; // Size: 0x20
    Params_OnMunitionHit params{};
    params.Caller = (UObject*)Caller;
    params.MunitionData = (FMunitionToInstigatorData)MunitionData;
    ProcessEvent(func, &params);
    MunitionData = params.MunitionData;
}
