#include "EARServiceAvailability.hpp"
#include "EARServiceInstallRequestResult.hpp"
#include "EARServicePermissionRequestResult.hpp"
#include "FLatentActionInfo.hpp"
#include "UARDependencyHandler.hpp"
#include "UARSessionConfig.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UARDependencyHandler* UARDependencyHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARDependencyHandler");
    return (UARDependencyHandler*)res;
}
void UARDependencyHandler::StartARSessionLatent(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent"));
    struct Params_StartARSessionLatent {
        UObject* WorldContextObject; // 0x0
        UARSessionConfig* SessionConfig; // 0x8
        FLatentActionInfo LatentInfo; // 0x10
    }; // Size: 0x28
    Params_StartARSessionLatent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SessionConfig = (UARSessionConfig*)SessionConfig;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
}
void UARDependencyHandler::RequestARSessionPermission(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission"));
    struct Params_RequestARSessionPermission {
        UObject* WorldContextObject; // 0x0
        UARSessionConfig* SessionConfig; // 0x8
        FLatentActionInfo LatentInfo; // 0x10
        EARServicePermissionRequestResult OutPermissionResult; // 0x28
    }; // Size: 0x29
    Params_RequestARSessionPermission params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SessionConfig = (UARSessionConfig*)SessionConfig;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.OutPermissionResult = (EARServicePermissionRequestResult)OutPermissionResult;
    ProcessEvent(func, &params);
    OutPermissionResult = params.OutPermissionResult;
}
void UARDependencyHandler::InstallARService(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARDependencyHandler.InstallARService"));
    struct Params_InstallARService {
        UObject* WorldContextObject; // 0x0
        FLatentActionInfo LatentInfo; // 0x8
        EARServiceInstallRequestResult OutInstallResult; // 0x20
    }; // Size: 0x21
    Params_InstallARService params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.OutInstallResult = (EARServiceInstallRequestResult)OutInstallResult;
    ProcessEvent(func, &params);
    OutInstallResult = params.OutInstallResult;
}
UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler"));
    struct Params_GetARDependencyHandler {
        UARDependencyHandler* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetARDependencyHandler params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARDependencyHandler*)params.ReturnValue;
}
void UARDependencyHandler::CheckARServiceAvailability(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability"));
    struct Params_CheckARServiceAvailability {
        UObject* WorldContextObject; // 0x0
        FLatentActionInfo LatentInfo; // 0x8
        EARServiceAvailability OutAvailability; // 0x20
    }; // Size: 0x21
    Params_CheckARServiceAvailability params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.OutAvailability = (EARServiceAvailability)OutAvailability;
    ProcessEvent(func, &params);
    OutAvailability = params.OutAvailability;
}
