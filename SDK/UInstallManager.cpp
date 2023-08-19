#include "EFeatureInstallState.hpp"
#include "EInstallFeatures.hpp"
#include "UFunction.hpp"
#include "UInstallManager.hpp"
#include "UObject.hpp"
UInstallManager* UInstallManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstallManager");
    return (UInstallManager*)res;
}
bool UInstallManager::IsLanguageInstalledOrInstalling(FString Language) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.IsLanguageInstalledOrInstalling"));
    struct Params_IsLanguageInstalledOrInstalling {
        FString Language; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsLanguageInstalledOrInstalling params{};
    params.Language = (FString)Language;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UInstallManager::UninstallFeature(EInstallFeatures FeatureId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.UninstallFeature"));
    struct Params_UninstallFeature {
        EInstallFeatures FeatureId; // 0x0
    }; // Size: 0x1
    Params_UninstallFeature params{};
    params.FeatureId = (EInstallFeatures)FeatureId;
    ProcessEvent(func, &params);
}
void UInstallManager::InstallFeature(EInstallFeatures FeatureId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.InstallFeature"));
    struct Params_InstallFeature {
        EInstallFeatures FeatureId; // 0x0
    }; // Size: 0x1
    Params_InstallFeature params{};
    params.FeatureId = (EInstallFeatures)FeatureId;
    ProcessEvent(func, &params);
}
bool UInstallManager::IsInstallingAnyPack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.IsInstallingAnyPack"));
    struct Params_IsInstallingAnyPack {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInstallingAnyPack params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInstallManager::IsInstallingAnyLanguagePack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.IsInstallingAnyLanguagePack"));
    struct Params_IsInstallingAnyLanguagePack {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInstallingAnyLanguagePack params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EFeatureInstallState UInstallManager::GetFeatureInstallState(EInstallFeatures FeatureId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.GetFeatureInstallState"));
    struct Params_GetFeatureInstallState {
        EInstallFeatures FeatureId; // 0x0
        EFeatureInstallState ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetFeatureInstallState params{};
    params.FeatureId = (EInstallFeatures)FeatureId;
    ProcessEvent(func, &params);
    return (EFeatureInstallState)params.ReturnValue;
}
float UInstallManager::GetFeatureInstallPercentage(EInstallFeatures FeatureId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.GetFeatureInstallPercentage"));
    struct Params_GetFeatureInstallPercentage {
        EInstallFeatures FeatureId; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetFeatureInstallPercentage params{};
    params.FeatureId = (EInstallFeatures)FeatureId;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EInstallFeatures UInstallManager::GetCurrentlyInstallingFeatureId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.GetCurrentlyInstallingFeatureId"));
    struct Params_GetCurrentlyInstallingFeatureId {
        EInstallFeatures ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentlyInstallingFeatureId params{};
    ProcessEvent(func, &params);
    return (EInstallFeatures)params.ReturnValue;
}
UInstallManager* UInstallManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.Get"));
    struct Params_Get {
        UInstallManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInstallManager*)params.ReturnValue;
}
FString UInstallManager::FindAvailableInstalledLanguage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManager.FindAvailableInstalledLanguage"));
    struct Params_FindAvailableInstalledLanguage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_FindAvailableInstalledLanguage params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
