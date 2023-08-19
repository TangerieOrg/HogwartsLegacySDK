#include "EMissionComplete.hpp"
#include "EMissionStatus.hpp"
#include "FMissionID.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMissionBPLibrary.hpp"
#include "UObject.hpp"
UMissionBPLibrary* UMissionBPLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionBPLibrary");
    return (UMissionBPLibrary*)res;
}
bool UMissionBPLibrary::IsFocusMission(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.IsFocusMission"));
    struct Params_IsFocusMission {
        FMissionID MissionID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsFocusMission params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMissionBPLibrary::TrackMission(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.TrackMission"));
    struct Params_TrackMission {
        FMissionID MissionID; // 0x0
    }; // Size: 0x8
    Params_TrackMission params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionBPLibrary::UpdateMissionProgress(FMissionID MissionID, FString StepName, int32_t ProgressIncrement, int32_t ProgressGoal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.UpdateMissionProgress"));
    struct Params_UpdateMissionProgress {
        FMissionID MissionID; // 0x0
        FString StepName; // 0x8
        int32_t ProgressIncrement; // 0x18
        int32_t ProgressGoal; // 0x1c
    }; // Size: 0x20
    Params_UpdateMissionProgress params{};
    params.MissionID = (FMissionID)MissionID;
    params.StepName = (FString)StepName;
    params.ProgressIncrement = (int32_t)ProgressIncrement;
    params.ProgressGoal = (int32_t)ProgressGoal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionBPLibrary::PrintMissionString(FMissionID MissionID, FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.PrintMissionString"));
    struct Params_PrintMissionString {
        FMissionID MissionID; // 0x0
        FString inString; // 0x8
    }; // Size: 0x18
    Params_PrintMissionString params{};
    params.MissionID = (FMissionID)MissionID;
    params.inString = (FString)inString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionBPLibrary::ResetMissionDevOnly(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.ResetMissionDevOnly"));
    struct Params_ResetMissionDevOnly {
        FMissionID MissionID; // 0x0
    }; // Size: 0x8
    Params_ResetMissionDevOnly params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionBPLibrary::HermesExecuteOwned_MissionID(FString Name, UObject* Owner, UObject* Caller, FMissionID& MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.HermesExecuteOwned_MissionID"));
    struct Params_HermesExecuteOwned_MissionID {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FMissionID MissionID; // 0x20
    }; // Size: 0x28
    Params_HermesExecuteOwned_MissionID params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MissionID = params.MissionID;
}
void UMissionBPLibrary::RequestMissionUpdates(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.RequestMissionUpdates"));
    struct Params_RequestMissionUpdates {
        FMissionID MissionID; // 0x0
    }; // Size: 0x8
    Params_RequestMissionUpdates params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
EMissionStatus UMissionBPLibrary::GetMissionStatus(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.GetMissionStatus"));
    struct Params_GetMissionStatus {
        FMissionID MissionID; // 0x0
        EMissionStatus ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetMissionStatus params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EMissionStatus)params.ReturnValue;
}
void UMissionBPLibrary::PlayMissionDevOnly(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.PlayMissionDevOnly"));
    struct Params_PlayMissionDevOnly {
        FMissionID MissionID; // 0x0
    }; // Size: 0x8
    Params_PlayMissionDevOnly params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMissionBPLibrary::IsExclusiveMissionActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.IsExclusiveMissionActive"));
    struct Params_IsExclusiveMissionActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsExclusiveMissionActive params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMissionBPLibrary::IsExclusiveMission(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.IsExclusiveMission"));
    struct Params_IsExclusiveMission {
        FMissionID MissionID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsExclusiveMission params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMissionBPLibrary::HermesMissionIDDelegate__DelegateSignature(UObject* Caller, FMissionID& MissionID) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.MissionBPLibrary.HermesMissionIDDelegate__DelegateSignature"));
    struct Params_HermesMissionIDDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FMissionID MissionID; // 0x8
    }; // Size: 0x10
    Params_HermesMissionIDDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.MissionID = (FMissionID)MissionID;
    ProcessEvent(func, &params);
    MissionID = params.MissionID;
}
void UMissionBPLibrary::HermesExecuteAll_MissionID(FString Name, UObject* Caller, FMissionID& MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.HermesExecuteAll_MissionID"));
    struct Params_HermesExecuteAll_MissionID {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FMissionID MissionID; // 0x18
    }; // Size: 0x20
    Params_HermesExecuteAll_MissionID params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MissionID = params.MissionID;
}
void UMissionBPLibrary::HermesBind_MissionID() {}
bool UMissionBPLibrary::GetMissionStepComplete(FMissionID MissionID, FString StepName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.GetMissionStepComplete"));
    struct Params_GetMissionStepComplete {
        FMissionID MissionID; // 0x0
        FString StepName; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetMissionStepComplete params{};
    params.MissionID = (FMissionID)MissionID;
    params.StepName = (FString)StepName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMissionBPLibrary::GetMissionComplete(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.GetMissionComplete"));
    struct Params_GetMissionComplete {
        FMissionID MissionID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetMissionComplete params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UMissionBPLibrary::GetCurrentMissionStepName(FMissionID MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.GetCurrentMissionStepName"));
    struct Params_GetCurrentMissionStepName {
        FMissionID MissionID; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCurrentMissionStepName params{};
    params.MissionID = (FMissionID)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMissionBPLibrary::CompleteMissionTask(FMissionID MissionID, FString StepName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.CompleteMissionTask"));
    struct Params_CompleteMissionTask {
        FMissionID MissionID; // 0x0
        FString StepName; // 0x8
    }; // Size: 0x18
    Params_CompleteMissionTask params{};
    params.MissionID = (FMissionID)MissionID;
    params.StepName = (FString)StepName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionBPLibrary::BranchMissionStepComplete(FMissionID MissionID, FString StepName, EMissionComplete& Complete) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.BranchMissionStepComplete"));
    struct Params_BranchMissionStepComplete {
        FMissionID MissionID; // 0x0
        FString StepName; // 0x8
        EMissionComplete Complete; // 0x18
    }; // Size: 0x19
    Params_BranchMissionStepComplete params{};
    params.MissionID = (FMissionID)MissionID;
    params.StepName = (FString)StepName;
    params.Complete = (EMissionComplete)Complete;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Complete = params.Complete;
}
void UMissionBPLibrary::BranchMissionStatus(FMissionID MissionID, EMissionStatus& Status) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.BranchMissionStatus"));
    struct Params_BranchMissionStatus {
        FMissionID MissionID; // 0x0
        EMissionStatus Status; // 0x8
    }; // Size: 0x9
    Params_BranchMissionStatus params{};
    params.MissionID = (FMissionID)MissionID;
    params.Status = (EMissionStatus)Status;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Status = params.Status;
}
void UMissionBPLibrary::BranchMissionComplete(FMissionID MissionID, EMissionComplete& Complete) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBPLibrary.BranchMissionComplete"));
    struct Params_BranchMissionComplete {
        FMissionID MissionID; // 0x0
        EMissionComplete Complete; // 0x8
    }; // Size: 0x9
    Params_BranchMissionComplete params{};
    params.MissionID = (FMissionID)MissionID;
    params.Complete = (EMissionComplete)Complete;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Complete = params.Complete;
}
void UMissionBPLibrary::BindMissionUpdates(FMissionID MissionID) {}
