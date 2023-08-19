#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class ADebugCameraController;
class UClass;
class UCheatManagerExtension;
#pragma pack(push, 1)
class UCheatManager : public UObject {
public:
    ADebugCameraController* DebugCameraControllerRef; // 0x28
    UClass* DebugCameraControllerClass; // 0x30
    char pad_38[0x40];
    TArray<UCheatManagerExtension*> CheatManagerExtensions; // 0x78
    static UCheatManager* StaticClass();
    void Walk();
    void ViewSelf();
    void ViewPlayer(FString S);
    void ViewClass(UClass* DesiredClass);
    void ViewActor(FName ActorName);
    void UpdateSafeArea();
    void ToggleServerStatReplicatorUpdateStatNet();
    void ToggleServerStatReplicatorClientOverwrite();
    void ToggleDebugCamera();
    void ToggleAILogging();
    void TestCollisionDistance();
    void Teleport();
    void Summon(FString ClassName);
    void StreamLevelOut(FName PackageName);
    void StreamLevelIn(FName PackageName);
    void SpawnServerStatReplicator();
    void Slomo(float NewTimeDilation);
    void SetWorldOrigin();
    void SetMouseSensitivityToDefault();
    void ServerToggleAILogging();
    void ReceiveInitCheatManager();
    void ReceiveEndPlay();
    void PlayersOnly();
    void OnlyLoadLevel(FName PackageName);
    void LogLoc();
    void InvertMouse();
    void God();
    void Ghost();
    void FreezeFrame(float Delay);
    void Fly();
    void FlushLog();
    void EnableDebugCamera();
    void DumpVoiceMutingState();
    void DumpPartyState();
    void DumpOnlineSessionState();
    void DumpChatState();
    void DisableDebugCamera();
    void DestroyTarget();
    void DestroyServerStatReplicator();
    void DestroyPawns(UClass* aClass);
    void DestroyAllPawnsExceptTarget();
    void DestroyAll(UClass* aClass);
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);
    void DebugCapsuleSweepPawn();
    void DebugCapsuleSweepComplex(bool bTraceComplex);
    void DebugCapsuleSweepClear();
    void DebugCapsuleSweepChannel(ECollisionChannel Channel);
    void DebugCapsuleSweepCapture();
    void DebugCapsuleSweep();
    void DamageTarget(float DamageAmount);
    void CheatScript(FString ScriptName);
    void ChangeSize(float F);
    void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString);
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    void BugIt(FString ScreenShotDescription);
}; // Size: 0x88
#pragma pack(pop)
