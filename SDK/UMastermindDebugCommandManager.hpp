#pragma once
#include <cstdint>
#include "UObject.hpp"
struct FMastermindMessage;
#pragma pack(push, 1)
class UMastermindDebugCommandManager : public UObject {
public:
    char pad_28[0x38];
    static UMastermindDebugCommandManager* StaticClass();
    void SetSessionId(FString InSessionId);
    void SetBuild(FString InBuild);
    static void SendMastermindMessage(FMastermindMessage& InMastermindMessage);
    void QATakeScreenshot(FString InFilename);
    void QAHangGame();
    void QAGameIsReady();
    void QADelayedConsoleCommand(FString InCommand, int32_t InDelayTime);
    void QACreateLargeLogResponse();
    void QACreateArtifactFolder(FString InData, FString InFilename, int32_t InNumArtifacts);
    void QACreateArtifact(FString InData, FString InFilename);
    void QACrashGame();
    void QAConsoleCommand(FString InCommand);
    void QAAssertVerify(bool bInIsSuccess);
    void QAAssertEnsure(bool bInIsSuccess);
    void QAAssertCheck(bool bInIsSuccess);
    void QAAppendToFile(FString inString, FString InFilename);
    void PMMC(int32_t InPlayerIndex, FString InCommand);
    bool NativeIsGameReady();
    void MMC(FString InCommand);
    bool IsGameReady();
    void DoMMC(FString InCommand, int32_t InPlayerIndex);
}; // Size: 0x60
#pragma pack(pop)
