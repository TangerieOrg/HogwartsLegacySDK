#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UMastermindFileHelper : public UBlueprintFunctionLibrary {
public:
    static UMastermindFileHelper* StaticClass();
    static bool GetVideoCaptureArtifactPath(FString InPath, FString& OutPath);
    static bool GetScreenshotArtifactPath(FString InPath, FString& OutPath);
    static bool GetProjectLogArtifactPath(FString InPath, FString& OutPath);
    static bool GetProfilingArtifactPath(FString InPath, FString& OutPath);
    static bool GetBugItArtifactPath(FString InPath, FString& OutPath);
    static bool GetAutomationTransientArtifactPath(FString InPath, FString& OutPath);
    static bool GetAutomationLogArtifactPath(FString InPath, FString& OutPath);
    static bool GetAutomationArtifactPath(FString InPath, FString& OutPath);
    static bool GetArtifactAbsolutePath(FString InPath, FString& OutPath);
}; // Size: 0x28
#pragma pack(pop)
