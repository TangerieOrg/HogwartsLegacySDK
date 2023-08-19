#include "FMastermindMessage.hpp"
#include "UFunction.hpp"
#include "UMastermindDebugCommandManager.hpp"
#include "UObject.hpp"
void UMastermindDebugCommandManager::QAGameIsReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QAGameIsReady"));
    struct Params_QAGameIsReady {
    }; // Size: 0x0
    Params_QAGameIsReady params{};
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QAHangGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QAHangGame"));
    struct Params_QAHangGame {
    }; // Size: 0x0
    Params_QAHangGame params{};
    ProcessEvent(func, &params);
}
UMastermindDebugCommandManager* UMastermindDebugCommandManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Mastermind.MastermindDebugCommandManager");
    return (UMastermindDebugCommandManager*)res;
}
void UMastermindDebugCommandManager::SetSessionId(FString InSessionId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.SetSessionId"));
    struct Params_SetSessionId {
        FString InSessionId; // 0x0
    }; // Size: 0x10
    Params_SetSessionId params{};
    params.InSessionId = (FString)InSessionId;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QATakeScreenshot(FString InFilename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QATakeScreenshot"));
    struct Params_QATakeScreenshot {
        FString InFilename; // 0x0
    }; // Size: 0x10
    Params_QATakeScreenshot params{};
    params.InFilename = (FString)InFilename;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::SetBuild(FString InBuild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.SetBuild"));
    struct Params_SetBuild {
        FString InBuild; // 0x0
    }; // Size: 0x10
    Params_SetBuild params{};
    params.InBuild = (FString)InBuild;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::SendMastermindMessage(FMastermindMessage& InMastermindMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.SendMastermindMessage"));
    struct Params_SendMastermindMessage {
        FMastermindMessage InMastermindMessage; // 0x0
    }; // Size: 0x8
    Params_SendMastermindMessage params{};
    params.InMastermindMessage = (FMastermindMessage)InMastermindMessage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMastermindMessage = params.InMastermindMessage;
}
void UMastermindDebugCommandManager::QAAssertCheck(bool bInIsSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QAAssertCheck"));
    struct Params_QAAssertCheck {
        bool bInIsSuccess; // 0x0
    }; // Size: 0x1
    Params_QAAssertCheck params{};
    params.bInIsSuccess = (bool)bInIsSuccess;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QADelayedConsoleCommand(FString InCommand, int32_t InDelayTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QADelayedConsoleCommand"));
    struct Params_QADelayedConsoleCommand {
        FString InCommand; // 0x0
        int32_t InDelayTime; // 0x10
    }; // Size: 0x14
    Params_QADelayedConsoleCommand params{};
    params.InCommand = (FString)InCommand;
    params.InDelayTime = (int32_t)InDelayTime;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QACreateLargeLogResponse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QACreateLargeLogResponse"));
    struct Params_QACreateLargeLogResponse {
    }; // Size: 0x0
    Params_QACreateLargeLogResponse params{};
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QACreateArtifactFolder(FString InData, FString InFilename, int32_t InNumArtifacts) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QACreateArtifactFolder"));
    struct Params_QACreateArtifactFolder {
        FString InData; // 0x0
        FString InFilename; // 0x10
        int32_t InNumArtifacts; // 0x20
    }; // Size: 0x24
    Params_QACreateArtifactFolder params{};
    params.InData = (FString)InData;
    params.InFilename = (FString)InFilename;
    params.InNumArtifacts = (int32_t)InNumArtifacts;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::DoMMC(FString InCommand, int32_t InPlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.DoMMC"));
    struct Params_DoMMC {
        FString InCommand; // 0x0
        int32_t InPlayerIndex; // 0x10
    }; // Size: 0x14
    Params_DoMMC params{};
    params.InCommand = (FString)InCommand;
    params.InPlayerIndex = (int32_t)InPlayerIndex;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QACreateArtifact(FString InData, FString InFilename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QACreateArtifact"));
    struct Params_QACreateArtifact {
        FString InData; // 0x0
        FString InFilename; // 0x10
    }; // Size: 0x20
    Params_QACreateArtifact params{};
    params.InData = (FString)InData;
    params.InFilename = (FString)InFilename;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QACrashGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QACrashGame"));
    struct Params_QACrashGame {
    }; // Size: 0x0
    Params_QACrashGame params{};
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QAConsoleCommand(FString InCommand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QAConsoleCommand"));
    struct Params_QAConsoleCommand {
        FString InCommand; // 0x0
    }; // Size: 0x10
    Params_QAConsoleCommand params{};
    params.InCommand = (FString)InCommand;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QAAssertVerify(bool bInIsSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QAAssertVerify"));
    struct Params_QAAssertVerify {
        bool bInIsSuccess; // 0x0
    }; // Size: 0x1
    Params_QAAssertVerify params{};
    params.bInIsSuccess = (bool)bInIsSuccess;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QAAssertEnsure(bool bInIsSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QAAssertEnsure"));
    struct Params_QAAssertEnsure {
        bool bInIsSuccess; // 0x0
    }; // Size: 0x1
    Params_QAAssertEnsure params{};
    params.bInIsSuccess = (bool)bInIsSuccess;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::QAAppendToFile(FString inString, FString InFilename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.QAAppendToFile"));
    struct Params_QAAppendToFile {
        FString inString; // 0x0
        FString InFilename; // 0x10
    }; // Size: 0x20
    Params_QAAppendToFile params{};
    params.inString = (FString)inString;
    params.InFilename = (FString)InFilename;
    ProcessEvent(func, &params);
}
void UMastermindDebugCommandManager::PMMC(int32_t InPlayerIndex, FString InCommand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.PMMC"));
    struct Params_PMMC {
        int32_t InPlayerIndex; // 0x0
        char pad_4[0x4];
        FString InCommand; // 0x8
    }; // Size: 0x18
    Params_PMMC params{};
    params.InPlayerIndex = (int32_t)InPlayerIndex;
    params.InCommand = (FString)InCommand;
    ProcessEvent(func, &params);
}
bool UMastermindDebugCommandManager::NativeIsGameReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.NativeIsGameReady"));
    struct Params_NativeIsGameReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_NativeIsGameReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMastermindDebugCommandManager::MMC(FString InCommand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.MMC"));
    struct Params_MMC {
        FString InCommand; // 0x0
    }; // Size: 0x10
    Params_MMC params{};
    params.InCommand = (FString)InCommand;
    ProcessEvent(func, &params);
}
bool UMastermindDebugCommandManager::IsGameReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindDebugCommandManager.IsGameReady"));
    struct Params_IsGameReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGameReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
