#include "AActor.hpp"
#include "AStencilManagerSingleton.hpp"
#include "FStencilManagerEnableInterfaceList.hpp"
#include "FStencilManagerMPCGlobals.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStencilManagerExternalControls.hpp"
#include "UStencilManagerSettings.hpp"
void AStencilManagerSingleton::SetStencilBlend(UObject* WorldContextObject, float blendVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManagerSingleton.SetStencilBlend"));
    struct Params_SetStencilBlend {
        UObject* WorldContextObject; // 0x0
        float blendVal; // 0x8
    }; // Size: 0xc
    Params_SetStencilBlend params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.blendVal = (float)blendVal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
AStencilManagerSingleton* AStencilManagerSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerSingleton");
    return (AStencilManagerSingleton*)res;
}
void AStencilManagerSingleton::SetStencilPlayerNearFadeDisable(UObject* WorldContextObject, bool bPlayerNearFadeDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManagerSingleton.SetStencilPlayerNearFadeDisable"));
    struct Params_SetStencilPlayerNearFadeDisable {
        UObject* WorldContextObject; // 0x0
        bool bPlayerNearFadeDisable; // 0x8
    }; // Size: 0x9
    Params_SetStencilPlayerNearFadeDisable params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bPlayerNearFadeDisable = (bool)bPlayerNearFadeDisable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AStencilManagerSingleton::SetOutdoorsDaytimeBoost(UObject* WorldContextObject, float boostVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManagerSingleton.SetOutdoorsDaytimeBoost"));
    struct Params_SetOutdoorsDaytimeBoost {
        UObject* WorldContextObject; // 0x0
        float boostVal; // 0x8
    }; // Size: 0xc
    Params_SetOutdoorsDaytimeBoost params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.boostVal = (float)boostVal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
