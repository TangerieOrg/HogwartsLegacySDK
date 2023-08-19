#pragma once
#include <cstdint>
#include "EMissionComplete.hpp"
#include "EMissionStatus.hpp"
#include "FMissionID.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UMissionBPLibrary : public UBlueprintFunctionLibrary {
public:
    static UMissionBPLibrary* StaticClass();
    static void UpdateMissionProgress(FMissionID MissionID, FString StepName, int32_t ProgressIncrement, int32_t ProgressGoal);
    static void TrackMission(FMissionID MissionID);
    static void ResetMissionDevOnly(FMissionID MissionID);
    static void RequestMissionUpdates(FMissionID MissionID);
    static void PrintMissionString(FMissionID MissionID, FString inString);
    static void PlayMissionDevOnly(FMissionID MissionID);
    static bool IsFocusMission(FMissionID MissionID);
    static bool IsExclusiveMissionActive();
    static bool IsExclusiveMission(FMissionID MissionID);
    void HermesMissionIDDelegate__DelegateSignature(UObject* Caller, FMissionID& MissionID);
    static void HermesExecuteOwned_MissionID(FString Name, UObject* Owner, UObject* Caller, FMissionID& MissionID);
    static void HermesExecuteAll_MissionID(FString Name, UObject* Caller, FMissionID& MissionID);
    static void HermesBind_MissionID();
    static bool GetMissionStepComplete(FMissionID MissionID, FString StepName);
    static EMissionStatus GetMissionStatus(FMissionID MissionID);
    static bool GetMissionComplete(FMissionID MissionID);
    static FString GetCurrentMissionStepName(FMissionID MissionID);
    static void CompleteMissionTask(FMissionID MissionID, FString StepName);
    static void BranchMissionStepComplete(FMissionID MissionID, FString StepName, EMissionComplete& Complete);
    static void BranchMissionStatus(FMissionID MissionID, EMissionStatus& Status);
    static void BranchMissionComplete(FMissionID MissionID, EMissionComplete& Complete);
    static void BindMissionUpdates(FMissionID MissionID);
}; // Size: 0x28
#pragma pack(pop)
