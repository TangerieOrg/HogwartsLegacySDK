#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ETestSuccess.hpp"
#include "FKey.hpp"
#include "FMastermindCommandResult.hpp"
#include "FMastermindProgressUpdate.hpp"
#include "FMastermindTestResult.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FMastermindTestResultMessage;
class UMastermindJsonObject;
#pragma pack(push, 1)
class UMastermindBPLibrary : public UBlueprintFunctionLibrary {
public:
    static UMastermindBPLibrary* StaticClass();
    static void SimulateTappedInput(UObject* InWorldContextObject, FKey InInputKey);
    static void SimulateInput(UObject* InWorldContextObject, FKey InInputKey, EInputEvent InInputEvent);
    static void SimulateAxis(UObject* InWorldContextObject, FKey InInputKey, float InDelta);
    static void MastermindSendTestResults(UObject* InWorldContextObject, TArray<FMastermindTestResult>& InTestResults);
    static void MastermindSendTestResultMessage(UObject* InWorldContextObject, FMastermindTestResultMessage& InResult);
    static void MastermindSendTestResult(UObject* InWorldContextObject, FString InName, bool bInIsSuccess);
    static void MastermindSendStepResult(UObject* InWorldContextObject, FString InMessage, bool bInIsSuccess, ETestSuccess InTestSuccess, TArray<FString>& InArtifacts, UMastermindJsonObject* InData);
    static void MastermindSendProgressUpdateMessage(UObject* InWorldContextObject, FMastermindProgressUpdate& InUpdate);
    static void MastermindSendProgressUpdate(UObject* InWorldContextObject, FString InMessage);
    static void MastermindSendCommandResultMessage(UObject* InWorldContextObject, FMastermindCommandResult& InResult);
    static FMastermindTestResult CreateMastermindTestResult(UObject* InWorldContextObject, FString InName, bool bInIsSuccess);
    static FMastermindProgressUpdate CreateMastermindProgressUpdate(UObject* InWorldContextObject, FString InMessage);
    static FMastermindCommandResult CreateMastermindCommandResult(UObject* InWorldContextObject, FString InMessage, bool bInIsSuccess, ETestSuccess InTestSuccess, TArray<FString>& InArtifacts, UMastermindJsonObject* InData);
}; // Size: 0x28
#pragma pack(pop)
