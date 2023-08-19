#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMastermindFileHelper.hpp"
UMastermindFileHelper* UMastermindFileHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Mastermind.MastermindFileHelper");
    return (UMastermindFileHelper*)res;
}
bool UMastermindFileHelper::GetAutomationLogArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetAutomationLogArtifactPath"));
    struct Params_GetAutomationLogArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetAutomationLogArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetVideoCaptureArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetVideoCaptureArtifactPath"));
    struct Params_GetVideoCaptureArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetVideoCaptureArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetScreenshotArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetScreenshotArtifactPath"));
    struct Params_GetScreenshotArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetScreenshotArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetBugItArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetBugItArtifactPath"));
    struct Params_GetBugItArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetBugItArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetProjectLogArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetProjectLogArtifactPath"));
    struct Params_GetProjectLogArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetProjectLogArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetAutomationTransientArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetAutomationTransientArtifactPath"));
    struct Params_GetAutomationTransientArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetAutomationTransientArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetArtifactAbsolutePath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetArtifactAbsolutePath"));
    struct Params_GetArtifactAbsolutePath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetArtifactAbsolutePath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetProfilingArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetProfilingArtifactPath"));
    struct Params_GetProfilingArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetProfilingArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UMastermindFileHelper::GetAutomationArtifactPath(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindFileHelper.GetAutomationArtifactPath"));
    struct Params_GetAutomationArtifactPath {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetAutomationArtifactPath params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
