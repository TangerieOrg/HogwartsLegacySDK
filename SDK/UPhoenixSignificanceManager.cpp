#include "AActor.hpp"
#include "ESignificanceBiasEnum.hpp"
#include "UBudgeter.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixSignificanceManager.hpp"
UPhoenixSignificanceManager* UPhoenixSignificanceManager::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.PhoenixSignificanceManager");
    return (UPhoenixSignificanceManager*)res;
}
bool UPhoenixSignificanceManager::SetObjectSignficanceBias(UObject* Object, ESignificanceBiasEnum SignificanceBias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PhoenixSignificanceManager.PhoenixSignificanceManager.SetObjectSignficanceBias"));
    struct Params_SetObjectSignficanceBias {
        UObject* Object; // 0x0
        ESignificanceBiasEnum SignificanceBias; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SetObjectSignficanceBias params{};
    params.Object = (UObject*)Object;
    params.SignificanceBias = (ESignificanceBiasEnum)SignificanceBias;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixSignificanceManager::OnRegisteredActorDestroyed(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PhoenixSignificanceManager.PhoenixSignificanceManager.OnRegisteredActorDestroyed"));
    struct Params_OnRegisteredActorDestroyed {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnRegisteredActorDestroyed params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
UPhoenixSignificanceManager* UPhoenixSignificanceManager::GetSignificanceManager(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PhoenixSignificanceManager.PhoenixSignificanceManager.GetSignificanceManager"));
    struct Params_GetSignificanceManager {
        UObject* WorldContextObject; // 0x0
        UPhoenixSignificanceManager* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSignificanceManager params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPhoenixSignificanceManager*)params.ReturnValue;
}
float UPhoenixSignificanceManager::GetSignificance(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PhoenixSignificanceManager.PhoenixSignificanceManager.GetSignificance"));
    struct Params_GetSignificance {
        UObject* Object; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSignificance params{};
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
