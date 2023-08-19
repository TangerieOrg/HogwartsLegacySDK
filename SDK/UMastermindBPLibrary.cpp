#include "EInputEvent.hpp"
#include "ETestSuccess.hpp"
#include "FKey.hpp"
#include "FMastermindCommandResult.hpp"
#include "FMastermindProgressUpdate.hpp"
#include "FMastermindTestResult.hpp"
#include "FMastermindTestResultMessage.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMastermindBPLibrary.hpp"
#include "UMastermindJsonObject.hpp"
#include "UObject.hpp"
UMastermindBPLibrary* UMastermindBPLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Mastermind.MastermindBPLibrary");
    return (UMastermindBPLibrary*)res;
}
void UMastermindBPLibrary::MastermindSendTestResults(UObject* InWorldContextObject, TArray<FMastermindTestResult>& InTestResults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.MastermindSendTestResults"));
    struct Params_MastermindSendTestResults {
        UObject* InWorldContextObject; // 0x0
        TArray<FMastermindTestResult> InTestResults; // 0x8
    }; // Size: 0x18
    Params_MastermindSendTestResults params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InTestResults = (TArray<FMastermindTestResult>)InTestResults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTestResults = params.InTestResults;
}
void UMastermindBPLibrary::SimulateAxis(UObject* InWorldContextObject, FKey InInputKey, float InDelta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.SimulateAxis"));
    struct Params_SimulateAxis {
        UObject* InWorldContextObject; // 0x0
        FKey InInputKey; // 0x8
        float InDelta; // 0x20
    }; // Size: 0x24
    Params_SimulateAxis params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InInputKey = (FKey)InInputKey;
    params.InDelta = (float)InDelta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMastermindBPLibrary::SimulateTappedInput(UObject* InWorldContextObject, FKey InInputKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.SimulateTappedInput"));
    struct Params_SimulateTappedInput {
        UObject* InWorldContextObject; // 0x0
        FKey InInputKey; // 0x8
    }; // Size: 0x20
    Params_SimulateTappedInput params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InInputKey = (FKey)InInputKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMastermindBPLibrary::MastermindSendTestResult(UObject* InWorldContextObject, FString InName, bool bInIsSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.MastermindSendTestResult"));
    struct Params_MastermindSendTestResult {
        UObject* InWorldContextObject; // 0x0
        FString InName; // 0x8
        bool bInIsSuccess; // 0x18
    }; // Size: 0x19
    Params_MastermindSendTestResult params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InName = (FString)InName;
    params.bInIsSuccess = (bool)bInIsSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMastermindBPLibrary::MastermindSendProgressUpdate(UObject* InWorldContextObject, FString InMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.MastermindSendProgressUpdate"));
    struct Params_MastermindSendProgressUpdate {
        UObject* InWorldContextObject; // 0x0
        FString InMessage; // 0x8
    }; // Size: 0x18
    Params_MastermindSendProgressUpdate params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InMessage = (FString)InMessage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMastermindBPLibrary::SimulateInput(UObject* InWorldContextObject, FKey InInputKey, EInputEvent InInputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.SimulateInput"));
    struct Params_SimulateInput {
        UObject* InWorldContextObject; // 0x0
        FKey InInputKey; // 0x8
        EInputEvent InInputEvent; // 0x20
    }; // Size: 0x21
    Params_SimulateInput params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InInputKey = (FKey)InInputKey;
    params.InInputEvent = (EInputEvent)InInputEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMastermindBPLibrary::MastermindSendTestResultMessage(UObject* InWorldContextObject, FMastermindTestResultMessage& InResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.MastermindSendTestResultMessage"));
    struct Params_MastermindSendTestResultMessage {
        UObject* InWorldContextObject; // 0x0
        FMastermindTestResultMessage InResult; // 0x8
    }; // Size: 0x20
    Params_MastermindSendTestResultMessage params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InResult = (FMastermindTestResultMessage)InResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InResult = params.InResult;
}
void UMastermindBPLibrary::MastermindSendStepResult(UObject* InWorldContextObject, FString InMessage, bool bInIsSuccess, ETestSuccess InTestSuccess, TArray<FString>& InArtifacts, UMastermindJsonObject* InData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.MastermindSendStepResult"));
    struct Params_MastermindSendStepResult {
        UObject* InWorldContextObject; // 0x0
        FString InMessage; // 0x8
        bool bInIsSuccess; // 0x18
        ETestSuccess InTestSuccess; // 0x19
        char pad_1a[0x6];
        TArray<FString> InArtifacts; // 0x20
        UMastermindJsonObject* InData; // 0x30
    }; // Size: 0x38
    Params_MastermindSendStepResult params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InMessage = (FString)InMessage;
    params.bInIsSuccess = (bool)bInIsSuccess;
    params.InTestSuccess = (ETestSuccess)InTestSuccess;
    params.InArtifacts = (TArray<FString>)InArtifacts;
    params.InData = (UMastermindJsonObject*)InData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InArtifacts = params.InArtifacts;
}
void UMastermindBPLibrary::MastermindSendProgressUpdateMessage(UObject* InWorldContextObject, FMastermindProgressUpdate& InUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.MastermindSendProgressUpdateMessage"));
    struct Params_MastermindSendProgressUpdateMessage {
        UObject* InWorldContextObject; // 0x0
        FMastermindProgressUpdate InUpdate; // 0x8
    }; // Size: 0x20
    Params_MastermindSendProgressUpdateMessage params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InUpdate = (FMastermindProgressUpdate)InUpdate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InUpdate = params.InUpdate;
}
void UMastermindBPLibrary::MastermindSendCommandResultMessage(UObject* InWorldContextObject, FMastermindCommandResult& InResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.MastermindSendCommandResultMessage"));
    struct Params_MastermindSendCommandResultMessage {
        UObject* InWorldContextObject; // 0x0
        FMastermindCommandResult InResult; // 0x8
    }; // Size: 0x48
    Params_MastermindSendCommandResultMessage params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InResult = (FMastermindCommandResult)InResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InResult = params.InResult;
}
FMastermindCommandResult UMastermindBPLibrary::CreateMastermindCommandResult(UObject* InWorldContextObject, FString InMessage, bool bInIsSuccess, ETestSuccess InTestSuccess, TArray<FString>& InArtifacts, UMastermindJsonObject* InData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.CreateMastermindCommandResult"));
    struct Params_CreateMastermindCommandResult {
        UObject* InWorldContextObject; // 0x0
        FString InMessage; // 0x8
        bool bInIsSuccess; // 0x18
        ETestSuccess InTestSuccess; // 0x19
        char pad_1a[0x6];
        TArray<FString> InArtifacts; // 0x20
        UMastermindJsonObject* InData; // 0x30
        FMastermindCommandResult ReturnValue; // 0x38
    }; // Size: 0x78
    Params_CreateMastermindCommandResult params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InMessage = (FString)InMessage;
    params.bInIsSuccess = (bool)bInIsSuccess;
    params.InTestSuccess = (ETestSuccess)InTestSuccess;
    params.InArtifacts = (TArray<FString>)InArtifacts;
    params.InData = (UMastermindJsonObject*)InData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InArtifacts = params.InArtifacts;
    return (FMastermindCommandResult)params.ReturnValue;
}
FMastermindTestResult UMastermindBPLibrary::CreateMastermindTestResult(UObject* InWorldContextObject, FString InName, bool bInIsSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.CreateMastermindTestResult"));
    struct Params_CreateMastermindTestResult {
        UObject* InWorldContextObject; // 0x0
        FString InName; // 0x8
        bool bInIsSuccess; // 0x18
        char pad_19[0x7];
        FMastermindTestResult ReturnValue; // 0x20
    }; // Size: 0x40
    Params_CreateMastermindTestResult params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InName = (FString)InName;
    params.bInIsSuccess = (bool)bInIsSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMastermindTestResult)params.ReturnValue;
}
FMastermindProgressUpdate UMastermindBPLibrary::CreateMastermindProgressUpdate(UObject* InWorldContextObject, FString InMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindBPLibrary.CreateMastermindProgressUpdate"));
    struct Params_CreateMastermindProgressUpdate {
        UObject* InWorldContextObject; // 0x0
        FString InMessage; // 0x8
        FMastermindProgressUpdate ReturnValue; // 0x18
    }; // Size: 0x30
    Params_CreateMastermindProgressUpdate params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    params.InMessage = (FString)InMessage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMastermindProgressUpdate)params.ReturnValue;
}
