#include "UCheatManager.hpp"
#include "UFunction.hpp"
#include "UGmCheatManager.hpp"
void UGmCheatManager::QARunLoadTimingsAutomationTest(FString TestName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QARunLoadTimingsAutomationTest"));
    struct Params_QARunLoadTimingsAutomationTest {
        FString TestName; // 0x0
    }; // Size: 0x10
    Params_QARunLoadTimingsAutomationTest params{};
    params.TestName = (FString)TestName;
    ProcessEvent(func, &params);
}
UGmCheatManager* UGmCheatManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GmCheatManager");
    return (UGmCheatManager*)res;
}
void UGmCheatManager::QARunAutomationTest(FString TestName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QARunAutomationTest"));
    struct Params_QARunAutomationTest {
        FString TestName; // 0x0
    }; // Size: 0x10
    Params_QARunAutomationTest params{};
    params.TestName = (FString)TestName;
    ProcessEvent(func, &params);
}
void UGmCheatManager::QAGetBeaconList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QAGetBeaconList"));
    struct Params_QAGetBeaconList {
    }; // Size: 0x0
    Params_QAGetBeaconList params{};
    ProcessEvent(func, &params);
}
void UGmCheatManager::QARunScalabilityAutomationTest(int32_t QualityPreset, FString TestName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QARunScalabilityAutomationTest"));
    struct Params_QARunScalabilityAutomationTest {
        int32_t QualityPreset; // 0x0
        char pad_4[0x4];
        FString TestName; // 0x8
    }; // Size: 0x18
    Params_QARunScalabilityAutomationTest params{};
    params.QualityPreset = (int32_t)QualityPreset;
    params.TestName = (FString)TestName;
    ProcessEvent(func, &params);
}
void UGmCheatManager::QARunMultiplePointOfInterestAutomationTest(FString TestName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QARunMultiplePointOfInterestAutomationTest"));
    struct Params_QARunMultiplePointOfInterestAutomationTest {
        FString TestName; // 0x0
    }; // Size: 0x10
    Params_QARunMultiplePointOfInterestAutomationTest params{};
    params.TestName = (FString)TestName;
    ProcessEvent(func, &params);
}
void UGmCheatManager::QARunBroomFlightAutomationTest(FString Command) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QARunBroomFlightAutomationTest"));
    struct Params_QARunBroomFlightAutomationTest {
        FString Command; // 0x0
    }; // Size: 0x10
    Params_QARunBroomFlightAutomationTest params{};
    params.Command = (FString)Command;
    ProcessEvent(func, &params);
}
void UGmCheatManager::QARunMemoryAutomationTest(FString TestName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QARunMemoryAutomationTest"));
    struct Params_QARunMemoryAutomationTest {
        FString TestName; // 0x0
    }; // Size: 0x10
    Params_QARunMemoryAutomationTest params{};
    params.TestName = (FString)TestName;
    ProcessEvent(func, &params);
}
void UGmCheatManager::QARunConjurationPerformanceTest(FString TestName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QARunConjurationPerformanceTest"));
    struct Params_QARunConjurationPerformanceTest {
        FString TestName; // 0x0
    }; // Size: 0x10
    Params_QARunConjurationPerformanceTest params{};
    params.TestName = (FString)TestName;
    ProcessEvent(func, &params);
}
void UGmCheatManager::QAGetEnvironmentInformation(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QAGetEnvironmentInformation"));
    struct Params_QAGetEnvironmentInformation {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_QAGetEnvironmentInformation params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void UGmCheatManager::QAConsoleCommand(FString Command) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.QAConsoleCommand"));
    struct Params_QAConsoleCommand {
        FString Command; // 0x0
    }; // Size: 0x10
    Params_QAConsoleCommand params{};
    params.Command = (FString)Command;
    ProcessEvent(func, &params);
}
void UGmCheatManager::BICaptureObjListMemory(FString Label) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.BICaptureObjListMemory"));
    struct Params_BICaptureObjListMemory {
        FString Label; // 0x0
    }; // Size: 0x10
    Params_BICaptureObjListMemory params{};
    params.Label = (FString)Label;
    ProcessEvent(func, &params);
}
void UGmCheatManager::BICaptureLLM(FString Label) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GmCheatManager.BICaptureLLM"));
    struct Params_BICaptureLLM {
        FString Label; // 0x0
    }; // Size: 0x10
    Params_BICaptureLLM params{};
    params.Label = (FString)Label;
    ProcessEvent(func, &params);
}
