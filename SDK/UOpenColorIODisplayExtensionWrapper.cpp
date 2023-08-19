#include "FOpenColorIODisplayConfiguration.hpp"
#include "FSceneViewExtensionIsActiveFunctor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOpenColorIODisplayExtensionWrapper.hpp"
UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper");
    return (UOpenColorIODisplayExtensionWrapper*)res;
}
void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions"));
    struct Params_SetSceneExtensionIsActiveFunctions {
        TArray<FSceneViewExtensionIsActiveFunctor> IsActiveFunctions; // 0x0
    }; // Size: 0x10
    Params_SetSceneExtensionIsActiveFunctions params{};
    params.IsActiveFunctions = (TArray<FSceneViewExtensionIsActiveFunctor>)IsActiveFunctions;
    ProcessEvent(func, &params);
    IsActiveFunctions = params.IsActiveFunctions;
}
void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction"));
    struct Params_SetSceneExtensionIsActiveFunction {
        FSceneViewExtensionIsActiveFunctor IsActiveFunction; // 0x0
    }; // Size: 0x50
    Params_SetSceneExtensionIsActiveFunction params{};
    params.IsActiveFunction = (FSceneViewExtensionIsActiveFunctor)IsActiveFunction;
    ProcessEvent(func, &params);
    IsActiveFunction = params.IsActiveFunction;
}
void UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration"));
    struct Params_SetOpenColorIOConfiguration {
        FOpenColorIODisplayConfiguration InDisplayConfiguration; // 0x0
    }; // Size: 0x60
    Params_SetOpenColorIOConfiguration params{};
    params.InDisplayConfiguration = (FOpenColorIODisplayConfiguration)InDisplayConfiguration;
    ProcessEvent(func, &params);
}
void UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension"));
    struct Params_RemoveSceneExtension {
    }; // Size: 0x0
    Params_RemoveSceneExtension params{};
    ProcessEvent(func, &params);
}
UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension"));
    struct Params_CreateOpenColorIODisplayExtension {
        FOpenColorIODisplayConfiguration InDisplayConfiguration; // 0x0
        FSceneViewExtensionIsActiveFunctor IsActiveFunction; // 0x60
        UOpenColorIODisplayExtensionWrapper* ReturnValue; // 0xb0
    }; // Size: 0xb8
    Params_CreateOpenColorIODisplayExtension params{};
    params.InDisplayConfiguration = (FOpenColorIODisplayConfiguration)InDisplayConfiguration;
    params.IsActiveFunction = (FSceneViewExtensionIsActiveFunctor)IsActiveFunction;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IsActiveFunction = params.IsActiveFunction;
    return (UOpenColorIODisplayExtensionWrapper*)params.ReturnValue;
}
