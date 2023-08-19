#include "UBlueprintFunctionLibrary.hpp"
#include "UBlueprintPathsLibrary.hpp"
#include "UFunction.hpp"
void UBlueprintPathsLibrary::SetProjectFilePath(FString NewGameProjectFilePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.SetProjectFilePath"));
    struct Params_SetProjectFilePath {
        FString NewGameProjectFilePath; // 0x0
    }; // Size: 0x10
    Params_SetProjectFilePath params{};
    params.NewGameProjectFilePath = (FString)NewGameProjectFilePath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UBlueprintPathsLibrary::HasProjectPersistentDownloadDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.HasProjectPersistentDownloadDir"));
    struct Params_HasProjectPersistentDownloadDir {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasProjectPersistentDownloadDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBlueprintPathsLibrary* UBlueprintPathsLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlueprintPathsLibrary");
    return (UBlueprintPathsLibrary*)res;
}
FString UBlueprintPathsLibrary::EngineDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineDir"));
    struct Params_EngineDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBlueprintPathsLibrary::ShouldSaveToUserDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ShouldSaveToUserDir"));
    struct Params_ShouldSaveToUserDir {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldSaveToUserDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBlueprintPathsLibrary::VideoCaptureDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.VideoCaptureDir"));
    struct Params_VideoCaptureDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_VideoCaptureDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UBlueprintPathsLibrary::Split(FString InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.Split"));
    struct Params_Split {
        FString InPath; // 0x0
        FString PathPart; // 0x10
        FString FilenamePart; // 0x20
        FString ExtensionPart; // 0x30
    }; // Size: 0x40
    Params_Split params{};
    params.InPath = (FString)InPath;
    params.PathPart = (FString)PathPart;
    params.FilenamePart = (FString)FilenamePart;
    params.ExtensionPart = (FString)ExtensionPart;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathPart = params.PathPart;
    FilenamePart = params.FilenamePart;
    ExtensionPart = params.ExtensionPart;
}
void UBlueprintPathsLibrary::ValidatePath(FString InPath, bool& bDidSucceed) {}
TArray<FString> UBlueprintPathsLibrary::GetGameLocalizationPaths() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetGameLocalizationPaths"));
    struct Params_GetGameLocalizationPaths {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetGameLocalizationPaths params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FString UBlueprintPathsLibrary::SourceConfigDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.SourceConfigDir"));
    struct Params_SourceConfigDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_SourceConfigDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ShaderWorkingDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ShaderWorkingDir"));
    struct Params_ShaderWorkingDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ShaderWorkingDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectPluginsDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectPluginsDir"));
    struct Params_ProjectPluginsDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectPluginsDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::SetExtension(FString InPath, FString InNewExtension) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.SetExtension"));
    struct Params_SetExtension {
        FString InPath; // 0x0
        FString InNewExtension; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_SetExtension params{};
    params.InPath = (FString)InPath;
    params.InNewExtension = (FString)InNewExtension;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectSavedDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectSavedDir"));
    struct Params_ProjectSavedDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectSavedDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GetExtension(FString InPath, bool bIncludeDot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetExtension"));
    struct Params_GetExtension {
        FString InPath; // 0x0
        bool bIncludeDot; // 0x10
        char pad_11[0x7];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetExtension params{};
    params.InPath = (FString)InPath;
    params.bIncludeDot = (bool)bIncludeDot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ScreenShotDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ScreenShotDir"));
    struct Params_ScreenShotDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ScreenShotDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::SandboxesDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.SandboxesDir"));
    struct Params_SandboxesDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_SandboxesDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::RootDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.RootDir"));
    struct Params_RootDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_RootDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GetBaseFilename(FString InPath, bool bRemovePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetBaseFilename"));
    struct Params_GetBaseFilename {
        FString InPath; // 0x0
        bool bRemovePath; // 0x10
        char pad_11[0x7];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetBaseFilename params{};
    params.InPath = (FString)InPath;
    params.bRemovePath = (bool)bRemovePath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UBlueprintPathsLibrary::RemoveDuplicateSlashes(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.RemoveDuplicateSlashes"));
    struct Params_RemoveDuplicateSlashes {
        FString InPath; // 0x0
        FString OutPath; // 0x10
    }; // Size: 0x20
    Params_RemoveDuplicateSlashes params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
}
FString UBlueprintPathsLibrary::ProjectUserDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectUserDir"));
    struct Params_ProjectUserDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectUserDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectPersistentDownloadDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectPersistentDownloadDir"));
    struct Params_ProjectPersistentDownloadDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectPersistentDownloadDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectModsDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectModsDir"));
    struct Params_ProjectModsDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectModsDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectLogDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectLogDir"));
    struct Params_ProjectLogDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectLogDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GeneratedConfigDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GeneratedConfigDir"));
    struct Params_GeneratedConfigDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GeneratedConfigDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectIntermediateDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectIntermediateDir"));
    struct Params_ProjectIntermediateDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectIntermediateDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectDir"));
    struct Params_ProjectDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectContentDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectContentDir"));
    struct Params_ProjectContentDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectContentDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProjectConfigDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProjectConfigDir"));
    struct Params_ProjectConfigDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProjectConfigDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GetInvalidFileSystemChars() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetInvalidFileSystemChars"));
    struct Params_GetInvalidFileSystemChars {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetInvalidFileSystemChars params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ProfilingDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ProfilingDir"));
    struct Params_ProfilingDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ProfilingDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UBlueprintPathsLibrary::NormalizeFilename(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.NormalizeFilename"));
    struct Params_NormalizeFilename {
        FString InPath; // 0x0
        FString OutPath; // 0x10
    }; // Size: 0x20
    Params_NormalizeFilename params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
}
FString UBlueprintPathsLibrary::EnterpriseFeaturePackDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EnterpriseFeaturePackDir"));
    struct Params_EnterpriseFeaturePackDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EnterpriseFeaturePackDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UBlueprintPathsLibrary::MakeStandardFilename(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.MakeStandardFilename"));
    struct Params_MakeStandardFilename {
        FString InPath; // 0x0
        FString OutPath; // 0x10
    }; // Size: 0x20
    Params_MakeStandardFilename params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
}
void UBlueprintPathsLibrary::NormalizeDirectoryName(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.NormalizeDirectoryName"));
    struct Params_NormalizeDirectoryName {
        FString InPath; // 0x0
        FString OutPath; // 0x10
    }; // Size: 0x20
    Params_NormalizeDirectoryName params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
}
bool UBlueprintPathsLibrary::MakePathRelativeTo(FString InPath, FString InRelativeTo, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.MakePathRelativeTo"));
    struct Params_MakePathRelativeTo {
        FString InPath; // 0x0
        FString InRelativeTo; // 0x10
        FString OutPath; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_MakePathRelativeTo params{};
    params.InPath = (FString)InPath;
    params.InRelativeTo = (FString)InRelativeTo;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
FString UBlueprintPathsLibrary::MakeValidFileName(FString inString, FString InReplacementChar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.MakeValidFileName"));
    struct Params_MakeValidFileName {
        FString inString; // 0x0
        FString InReplacementChar; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_MakeValidFileName params{};
    params.inString = (FString)inString;
    params.InReplacementChar = (FString)InReplacementChar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GameDevelopersDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GameDevelopersDir"));
    struct Params_GameDevelopersDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GameDevelopersDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FString> UBlueprintPathsLibrary::GetEditorLocalizationPaths() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetEditorLocalizationPaths"));
    struct Params_GetEditorLocalizationPaths {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetEditorLocalizationPaths params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
TArray<FString> UBlueprintPathsLibrary::GetRestrictedFolderNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetRestrictedFolderNames"));
    struct Params_GetRestrictedFolderNames {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetRestrictedFolderNames params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UBlueprintPathsLibrary::MakePlatformFilename(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.MakePlatformFilename"));
    struct Params_MakePlatformFilename {
        FString InPath; // 0x0
        FString OutPath; // 0x10
    }; // Size: 0x20
    Params_MakePlatformFilename params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
}
FString UBlueprintPathsLibrary::GetProjectFilePath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetProjectFilePath"));
    struct Params_GetProjectFilePath {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetProjectFilePath params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::LaunchDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.LaunchDir"));
    struct Params_LaunchDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LaunchDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBlueprintPathsLibrary::IsSamePath(FString PathA, FString PathB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.IsSamePath"));
    struct Params_IsSamePath {
        FString PathA; // 0x0
        FString PathB; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_IsSamePath params{};
    params.PathA = (FString)PathA;
    params.PathB = (FString)PathB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EngineUserDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineUserDir"));
    struct Params_EngineUserDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineUserDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBlueprintPathsLibrary::IsRestrictedPath(FString InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.IsRestrictedPath"));
    struct Params_IsRestrictedPath {
        FString InPath; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsRestrictedPath params{};
    params.InPath = (FString)InPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBlueprintPathsLibrary::IsRelative(FString InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.IsRelative"));
    struct Params_IsRelative {
        FString InPath; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsRelative params{};
    params.InPath = (FString)InPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBlueprintPathsLibrary::IsProjectFilePathSet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.IsProjectFilePathSet"));
    struct Params_IsProjectFilePathSet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProjectFilePathSet params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EngineVersionAgnosticUserDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineVersionAgnosticUserDir"));
    struct Params_EngineVersionAgnosticUserDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineVersionAgnosticUserDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBlueprintPathsLibrary::IsDrive(FString InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.IsDrive"));
    struct Params_IsDrive {
        FString InPath; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsDrive params{};
    params.InPath = (FString)InPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FString> UBlueprintPathsLibrary::GetToolTipLocalizationPaths() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetToolTipLocalizationPaths"));
    struct Params_GetToolTipLocalizationPaths {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetToolTipLocalizationPaths params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GetRelativePathToRoot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetRelativePathToRoot"));
    struct Params_GetRelativePathToRoot {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetRelativePathToRoot params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FString> UBlueprintPathsLibrary::GetEngineLocalizationPaths() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetEngineLocalizationPaths"));
    struct Params_GetEngineLocalizationPaths {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetEngineLocalizationPaths params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FString UBlueprintPathsLibrary::FeaturePackDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.FeaturePackDir"));
    struct Params_FeaturePackDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_FeaturePackDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GetCleanFilename(FString InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetCleanFilename"));
    struct Params_GetCleanFilename {
        FString InPath; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetCleanFilename params{};
    params.InPath = (FString)InPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FString> UBlueprintPathsLibrary::GetPropertyNameLocalizationPaths() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetPropertyNameLocalizationPaths"));
    struct Params_GetPropertyNameLocalizationPaths {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPropertyNameLocalizationPaths params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EngineSourceDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineSourceDir"));
    struct Params_EngineSourceDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineSourceDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GetPath(FString InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GetPath"));
    struct Params_GetPath {
        FString InPath; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetPath params{};
    params.InPath = (FString)InPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GameUserDeveloperDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GameUserDeveloperDir"));
    struct Params_GameUserDeveloperDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GameUserDeveloperDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GameSourceDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GameSourceDir"));
    struct Params_GameSourceDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GameSourceDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::GameAgnosticSavedDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.GameAgnosticSavedDir"));
    struct Params_GameAgnosticSavedDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GameAgnosticSavedDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EngineSavedDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineSavedDir"));
    struct Params_EngineSavedDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineSavedDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBlueprintPathsLibrary::FileExists(FString InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.FileExists"));
    struct Params_FileExists {
        FString InPath; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_FileExists params{};
    params.InPath = (FString)InPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EnterprisePluginsDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EnterprisePluginsDir"));
    struct Params_EnterprisePluginsDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EnterprisePluginsDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EnterpriseDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EnterpriseDir"));
    struct Params_EnterpriseDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EnterpriseDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EnginePluginsDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EnginePluginsDir"));
    struct Params_EnginePluginsDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EnginePluginsDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EngineIntermediateDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineIntermediateDir"));
    struct Params_EngineIntermediateDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineIntermediateDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EngineContentDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineContentDir"));
    struct Params_EngineContentDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineContentDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::EngineConfigDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.EngineConfigDir"));
    struct Params_EngineConfigDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_EngineConfigDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBlueprintPathsLibrary::DirectoryExists(FString InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.DirectoryExists"));
    struct Params_DirectoryExists {
        FString InPath; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DirectoryExists params{};
    params.InPath = (FString)InPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBlueprintPathsLibrary::DiffDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.DiffDir"));
    struct Params_DiffDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_DiffDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::CreateTempFilename(FString Path, FString Prefix, FString Extension) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.CreateTempFilename"));
    struct Params_CreateTempFilename {
        FString Path; // 0x0
        FString Prefix; // 0x10
        FString Extension; // 0x20
        FString ReturnValue; // 0x30
    }; // Size: 0x40
    Params_CreateTempFilename params{};
    params.Path = (FString)Path;
    params.Prefix = (FString)Prefix;
    params.Extension = (FString)Extension;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ConvertToSandboxPath(FString InPath, FString InSandboxName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ConvertToSandboxPath"));
    struct Params_ConvertToSandboxPath {
        FString InPath; // 0x0
        FString InSandboxName; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_ConvertToSandboxPath params{};
    params.InPath = (FString)InPath;
    params.InSandboxName = (FString)InSandboxName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ConvertRelativePathToFull(FString InPath, FString InBasePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ConvertRelativePathToFull"));
    struct Params_ConvertRelativePathToFull {
        FString InPath; // 0x0
        FString InBasePath; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_ConvertRelativePathToFull params{};
    params.InPath = (FString)InPath;
    params.InBasePath = (FString)InBasePath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ConvertFromSandboxPath(FString InPath, FString InSandboxName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ConvertFromSandboxPath"));
    struct Params_ConvertFromSandboxPath {
        FString InPath; // 0x0
        FString InSandboxName; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_ConvertFromSandboxPath params{};
    params.InPath = (FString)InPath;
    params.InSandboxName = (FString)InSandboxName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::Combine(TArray<FString>& InPaths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.Combine"));
    struct Params_Combine {
        TArray<FString> InPaths; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Combine params{};
    params.InPaths = (TArray<FString>)InPaths;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InPaths = params.InPaths;
    return (FString)params.ReturnValue;
}
bool UBlueprintPathsLibrary::CollapseRelativeDirectories(FString InPath, FString& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.CollapseRelativeDirectories"));
    struct Params_CollapseRelativeDirectories {
        FString InPath; // 0x0
        FString OutPath; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_CollapseRelativeDirectories params{};
    params.InPath = (FString)InPath;
    params.OutPath = (FString)OutPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
FString UBlueprintPathsLibrary::CloudDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.CloudDir"));
    struct Params_CloudDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_CloudDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::ChangeExtension(FString InPath, FString InNewExtension) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.ChangeExtension"));
    struct Params_ChangeExtension {
        FString InPath; // 0x0
        FString InNewExtension; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_ChangeExtension params{};
    params.InPath = (FString)InPath;
    params.InNewExtension = (FString)InNewExtension;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::BugItDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.BugItDir"));
    struct Params_BugItDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_BugItDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::AutomationTransientDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.AutomationTransientDir"));
    struct Params_AutomationTransientDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_AutomationTransientDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::AutomationLogDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.AutomationLogDir"));
    struct Params_AutomationLogDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_AutomationLogDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UBlueprintPathsLibrary::AutomationDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPathsLibrary.AutomationDir"));
    struct Params_AutomationDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_AutomationDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
