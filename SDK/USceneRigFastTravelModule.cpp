#include "EFT_TriggerType.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneRigFastTravelModule.hpp"
USceneRigFastTravelModule* USceneRigFastTravelModule::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigFastTravelModule");
    return (USceneRigFastTravelModule*)res;
}
void USceneRigFastTravelModule::SetFastTravelTriggerName(FString TriggerName, EFT_TriggerType TriggerType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigFastTravelModule.SetFastTravelTriggerName"));
    struct Params_SetFastTravelTriggerName {
        FString TriggerName; // 0x0
        EFT_TriggerType TriggerType; // 0x10
    }; // Size: 0x11
    Params_SetFastTravelTriggerName params{};
    params.TriggerName = (FString)TriggerName;
    params.TriggerType = (EFT_TriggerType)TriggerType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString USceneRigFastTravelModule::GetFastTravelTriggerName(EFT_TriggerType TriggerType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigFastTravelModule.GetFastTravelTriggerName"));
    struct Params_GetFastTravelTriggerName {
        EFT_TriggerType TriggerType; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetFastTravelTriggerName params{};
    params.TriggerType = (EFT_TriggerType)TriggerType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void USceneRigFastTravelModule::ClearFastTravelTriggerName(EFT_TriggerType TriggerType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigFastTravelModule.ClearFastTravelTriggerName"));
    struct Params_ClearFastTravelTriggerName {
        EFT_TriggerType TriggerType; // 0x0
    }; // Size: 0x1
    Params_ClearFastTravelTriggerName params{};
    params.TriggerType = (EFT_TriggerType)TriggerType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
