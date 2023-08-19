#include "ADebugCameraController.hpp"
#include "ECollisionChannel.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCheatManager.hpp"
#include "UCheatManagerExtension.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UCheatManager::ReceiveEndPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
    }; // Size: 0x0
    Params_ReceiveEndPlay params{};
    ProcessEvent(func, &params);
}
UCheatManager* UCheatManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CheatManager");
    return (UCheatManager*)res;
}
void UCheatManager::Walk() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.Walk"));
    struct Params_Walk {
    }; // Size: 0x0
    Params_Walk params{};
    ProcessEvent(func, &params);
}
void UCheatManager::FreezeFrame(float Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.FreezeFrame"));
    struct Params_FreezeFrame {
        float Delay; // 0x0
    }; // Size: 0x4
    Params_FreezeFrame params{};
    params.Delay = (float)Delay;
    ProcessEvent(func, &params);
}
void UCheatManager::ViewSelf() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ViewSelf"));
    struct Params_ViewSelf {
    }; // Size: 0x0
    Params_ViewSelf params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DebugCapsuleSweepPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DebugCapsuleSweepPawn"));
    struct Params_DebugCapsuleSweepPawn {
    }; // Size: 0x0
    Params_DebugCapsuleSweepPawn params{};
    ProcessEvent(func, &params);
}
void UCheatManager::God() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.God"));
    struct Params_God {
    }; // Size: 0x0
    Params_God params{};
    ProcessEvent(func, &params);
}
void UCheatManager::ViewPlayer(FString S) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ViewPlayer"));
    struct Params_ViewPlayer {
        FString S; // 0x0
    }; // Size: 0x10
    Params_ViewPlayer params{};
    params.S = (FString)S;
    ProcessEvent(func, &params);
}
void UCheatManager::ToggleServerStatReplicatorClientOverwrite() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite"));
    struct Params_ToggleServerStatReplicatorClientOverwrite {
    }; // Size: 0x0
    Params_ToggleServerStatReplicatorClientOverwrite params{};
    ProcessEvent(func, &params);
}
void UCheatManager::ViewClass(UClass* DesiredClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ViewClass"));
    struct Params_ViewClass {
        UClass* DesiredClass; // 0x0
    }; // Size: 0x8
    Params_ViewClass params{};
    params.DesiredClass = (UClass*)DesiredClass;
    ProcessEvent(func, &params);
}
void UCheatManager::ViewActor(FName ActorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ViewActor"));
    struct Params_ViewActor {
        FName ActorName; // 0x0
    }; // Size: 0x8
    Params_ViewActor params{};
    params.ActorName = (FName)ActorName;
    ProcessEvent(func, &params);
}
void UCheatManager::UpdateSafeArea() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.UpdateSafeArea"));
    struct Params_UpdateSafeArea {
    }; // Size: 0x0
    Params_UpdateSafeArea params{};
    ProcessEvent(func, &params);
}
void UCheatManager::StreamLevelOut(FName PackageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.StreamLevelOut"));
    struct Params_StreamLevelOut {
        FName PackageName; // 0x0
    }; // Size: 0x8
    Params_StreamLevelOut params{};
    params.PackageName = (FName)PackageName;
    ProcessEvent(func, &params);
}
void UCheatManager::ToggleServerStatReplicatorUpdateStatNet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet"));
    struct Params_ToggleServerStatReplicatorUpdateStatNet {
    }; // Size: 0x0
    Params_ToggleServerStatReplicatorUpdateStatNet params{};
    ProcessEvent(func, &params);
}
void UCheatManager::ToggleDebugCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ToggleDebugCamera"));
    struct Params_ToggleDebugCamera {
    }; // Size: 0x0
    Params_ToggleDebugCamera params{};
    ProcessEvent(func, &params);
}
void UCheatManager::ToggleAILogging() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ToggleAILogging"));
    struct Params_ToggleAILogging {
    }; // Size: 0x0
    Params_ToggleAILogging params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DumpChatState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DumpChatState"));
    struct Params_DumpChatState {
    }; // Size: 0x0
    Params_DumpChatState params{};
    ProcessEvent(func, &params);
}
void UCheatManager::TestCollisionDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.TestCollisionDistance"));
    struct Params_TestCollisionDistance {
    }; // Size: 0x0
    Params_TestCollisionDistance params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DestroyTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DestroyTarget"));
    struct Params_DestroyTarget {
    }; // Size: 0x0
    Params_DestroyTarget params{};
    ProcessEvent(func, &params);
}
void UCheatManager::Teleport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.Teleport"));
    struct Params_Teleport {
    }; // Size: 0x0
    Params_Teleport params{};
    ProcessEvent(func, &params);
}
void UCheatManager::Summon(FString ClassName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.Summon"));
    struct Params_Summon {
        FString ClassName; // 0x0
    }; // Size: 0x10
    Params_Summon params{};
    params.ClassName = (FString)ClassName;
    ProcessEvent(func, &params);
}
void UCheatManager::StreamLevelIn(FName PackageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.StreamLevelIn"));
    struct Params_StreamLevelIn {
        FName PackageName; // 0x0
    }; // Size: 0x8
    Params_StreamLevelIn params{};
    params.PackageName = (FName)PackageName;
    ProcessEvent(func, &params);
}
void UCheatManager::BugIt(FString ScreenShotDescription) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.BugIt"));
    struct Params_BugIt {
        FString ScreenShotDescription; // 0x0
    }; // Size: 0x10
    Params_BugIt params{};
    params.ScreenShotDescription = (FString)ScreenShotDescription;
    ProcessEvent(func, &params);
}
void UCheatManager::SetWorldOrigin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.SetWorldOrigin"));
    struct Params_SetWorldOrigin {
    }; // Size: 0x0
    Params_SetWorldOrigin params{};
    ProcessEvent(func, &params);
}
void UCheatManager::SpawnServerStatReplicator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.SpawnServerStatReplicator"));
    struct Params_SpawnServerStatReplicator {
    }; // Size: 0x0
    Params_SpawnServerStatReplicator params{};
    ProcessEvent(func, &params);
}
void UCheatManager::Slomo(float NewTimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.Slomo"));
    struct Params_Slomo {
        float NewTimeDilation; // 0x0
    }; // Size: 0x4
    Params_Slomo params{};
    params.NewTimeDilation = (float)NewTimeDilation;
    ProcessEvent(func, &params);
}
void UCheatManager::SetMouseSensitivityToDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.SetMouseSensitivityToDefault"));
    struct Params_SetMouseSensitivityToDefault {
    }; // Size: 0x0
    Params_SetMouseSensitivityToDefault params{};
    ProcessEvent(func, &params);
}
void UCheatManager::ServerToggleAILogging() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ServerToggleAILogging"));
    struct Params_ServerToggleAILogging {
    }; // Size: 0x0
    Params_ServerToggleAILogging params{};
    ProcessEvent(func, &params);
}
void UCheatManager::ReceiveInitCheatManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ReceiveInitCheatManager"));
    struct Params_ReceiveInitCheatManager {
    }; // Size: 0x0
    Params_ReceiveInitCheatManager params{};
    ProcessEvent(func, &params);
}
void UCheatManager::PlayersOnly() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.PlayersOnly"));
    struct Params_PlayersOnly {
    }; // Size: 0x0
    Params_PlayersOnly params{};
    ProcessEvent(func, &params);
}
void UCheatManager::LogLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.LogLoc"));
    struct Params_LogLoc {
    }; // Size: 0x0
    Params_LogLoc params{};
    ProcessEvent(func, &params);
}
void UCheatManager::OnlyLoadLevel(FName PackageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.OnlyLoadLevel"));
    struct Params_OnlyLoadLevel {
        FName PackageName; // 0x0
    }; // Size: 0x8
    Params_OnlyLoadLevel params{};
    params.PackageName = (FName)PackageName;
    ProcessEvent(func, &params);
}
void UCheatManager::InvertMouse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.InvertMouse"));
    struct Params_InvertMouse {
    }; // Size: 0x0
    Params_InvertMouse params{};
    ProcessEvent(func, &params);
}
void UCheatManager::Ghost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.Ghost"));
    struct Params_Ghost {
    }; // Size: 0x0
    Params_Ghost params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DebugCapsuleSweepCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DebugCapsuleSweepCapture"));
    struct Params_DebugCapsuleSweepCapture {
    }; // Size: 0x0
    Params_DebugCapsuleSweepCapture params{};
    ProcessEvent(func, &params);
}
void UCheatManager::Fly() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.Fly"));
    struct Params_Fly {
    }; // Size: 0x0
    Params_Fly params{};
    ProcessEvent(func, &params);
}
void UCheatManager::FlushLog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.FlushLog"));
    struct Params_FlushLog {
    }; // Size: 0x0
    Params_FlushLog params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DisableDebugCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DisableDebugCamera"));
    struct Params_DisableDebugCamera {
    }; // Size: 0x0
    Params_DisableDebugCamera params{};
    ProcessEvent(func, &params);
}
void UCheatManager::EnableDebugCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.EnableDebugCamera"));
    struct Params_EnableDebugCamera {
    }; // Size: 0x0
    Params_EnableDebugCamera params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DumpVoiceMutingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DumpVoiceMutingState"));
    struct Params_DumpVoiceMutingState {
    }; // Size: 0x0
    Params_DumpVoiceMutingState params{};
    ProcessEvent(func, &params);
}
void UCheatManager::BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.BugItStringCreator"));
    struct Params_BugItStringCreator {
        FVector ViewLocation; // 0x0
        FRotator ViewRotation; // 0xc
        FString GoString; // 0x18
        FString LocString; // 0x28
    }; // Size: 0x38
    Params_BugItStringCreator params{};
    params.ViewLocation = (FVector)ViewLocation;
    params.ViewRotation = (FRotator)ViewRotation;
    params.GoString = (FString)GoString;
    params.LocString = (FString)LocString;
    ProcessEvent(func, &params);
    GoString = params.GoString;
    LocString = params.LocString;
}
void UCheatManager::DumpPartyState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DumpPartyState"));
    struct Params_DumpPartyState {
    }; // Size: 0x0
    Params_DumpPartyState params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DumpOnlineSessionState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DumpOnlineSessionState"));
    struct Params_DumpOnlineSessionState {
    }; // Size: 0x0
    Params_DumpOnlineSessionState params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DestroyServerStatReplicator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DestroyServerStatReplicator"));
    struct Params_DestroyServerStatReplicator {
    }; // Size: 0x0
    Params_DestroyServerStatReplicator params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DestroyPawns(UClass* aClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DestroyPawns"));
    struct Params_DestroyPawns {
        UClass* aClass; // 0x0
    }; // Size: 0x8
    Params_DestroyPawns params{};
    params.aClass = (UClass*)aClass;
    ProcessEvent(func, &params);
}
void UCheatManager::DestroyAllPawnsExceptTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DestroyAllPawnsExceptTarget"));
    struct Params_DestroyAllPawnsExceptTarget {
    }; // Size: 0x0
    Params_DestroyAllPawnsExceptTarget params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DestroyAll(UClass* aClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DestroyAll"));
    struct Params_DestroyAll {
        UClass* aClass; // 0x0
    }; // Size: 0x8
    Params_DestroyAll params{};
    params.aClass = (UClass*)aClass;
    ProcessEvent(func, &params);
}
void UCheatManager::DebugCapsuleSweepSize(float HalfHeight, float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DebugCapsuleSweepSize"));
    struct Params_DebugCapsuleSweepSize {
        float HalfHeight; // 0x0
        float Radius; // 0x4
    }; // Size: 0x8
    Params_DebugCapsuleSweepSize params{};
    params.HalfHeight = (float)HalfHeight;
    params.Radius = (float)Radius;
    ProcessEvent(func, &params);
}
void UCheatManager::DebugCapsuleSweepComplex(bool bTraceComplex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DebugCapsuleSweepComplex"));
    struct Params_DebugCapsuleSweepComplex {
        bool bTraceComplex; // 0x0
    }; // Size: 0x1
    Params_DebugCapsuleSweepComplex params{};
    params.bTraceComplex = (bool)bTraceComplex;
    ProcessEvent(func, &params);
}
void UCheatManager::DebugCapsuleSweepClear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DebugCapsuleSweepClear"));
    struct Params_DebugCapsuleSweepClear {
    }; // Size: 0x0
    Params_DebugCapsuleSweepClear params{};
    ProcessEvent(func, &params);
}
void UCheatManager::DamageTarget(float DamageAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DamageTarget"));
    struct Params_DamageTarget {
        float DamageAmount; // 0x0
    }; // Size: 0x4
    Params_DamageTarget params{};
    params.DamageAmount = (float)DamageAmount;
    ProcessEvent(func, &params);
}
void UCheatManager::DebugCapsuleSweepChannel(ECollisionChannel Channel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DebugCapsuleSweepChannel"));
    struct Params_DebugCapsuleSweepChannel {
        ECollisionChannel Channel; // 0x0
    }; // Size: 0x1
    Params_DebugCapsuleSweepChannel params{};
    params.Channel = (ECollisionChannel)Channel;
    ProcessEvent(func, &params);
}
void UCheatManager::DebugCapsuleSweep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.DebugCapsuleSweep"));
    struct Params_DebugCapsuleSweep {
    }; // Size: 0x0
    Params_DebugCapsuleSweep params{};
    ProcessEvent(func, &params);
}
void UCheatManager::CheatScript(FString ScriptName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.CheatScript"));
    struct Params_CheatScript {
        FString ScriptName; // 0x0
    }; // Size: 0x10
    Params_CheatScript params{};
    params.ScriptName = (FString)ScriptName;
    ProcessEvent(func, &params);
}
void UCheatManager::ChangeSize(float F) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.ChangeSize"));
    struct Params_ChangeSize {
        float F; // 0x0
    }; // Size: 0x4
    Params_ChangeSize params{};
    params.F = (float)F;
    ProcessEvent(func, &params);
}
void UCheatManager::BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CheatManager.BugItGo"));
    struct Params_BugItGo {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        float Pitch; // 0xc
        float Yaw; // 0x10
        float Roll; // 0x14
    }; // Size: 0x18
    Params_BugItGo params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.Pitch = (float)Pitch;
    params.Yaw = (float)Yaw;
    params.Roll = (float)Roll;
    ProcessEvent(func, &params);
}
