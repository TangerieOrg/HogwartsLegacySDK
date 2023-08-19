#pragma once
#include <cstdint>
#include "UCheatManager.hpp"
#pragma pack(push, 1)
class UGmCheatManager : public UCheatManager {
public:
    TArray<UCheatManager*> OtherCheatManagers; // 0x88
    static UGmCheatManager* StaticClass();
    void QARunScalabilityAutomationTest(int32_t QualityPreset, FString TestName);
    void QARunMultiplePointOfInterestAutomationTest(FString TestName);
    void QARunMemoryAutomationTest(FString TestName);
    void QARunLoadTimingsAutomationTest(FString TestName);
    void QARunConjurationPerformanceTest(FString TestName);
    void QARunBroomFlightAutomationTest(FString Command);
    void QARunAutomationTest(FString TestName);
    void QAGetEnvironmentInformation(int32_t Index);
    void QAGetBeaconList();
    void QAConsoleCommand(FString Command);
    void BICaptureObjListMemory(FString Label);
    void BICaptureLLM(FString Label);
}; // Size: 0x98
#pragma pack(pop)
