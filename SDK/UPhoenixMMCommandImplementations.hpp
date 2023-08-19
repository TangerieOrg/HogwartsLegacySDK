#pragma once
#include <cstdint>
#include "FKey.hpp"
#include "FVector.hpp"
#include "UMastermindDebugCommandManager.hpp"
#pragma pack(push, 1)
class UPhoenixMMCommandImplementations : public UMastermindDebugCommandManager {
public:
    char pad_60[0x78];
    static UPhoenixMMCommandImplementations* StaticClass();
    void ToggleWorldBounds();
    static bool ToggleWImGUIMainWindow();
    void RunAtDungeonExitDelegate(FVector TargetLocation);
    void RunAtDungeonDelegate(FVector TargetLocation);
    void ReleaseCamera();
    void QATargetNearestEnemy();
    void QAStreamingRecordSession(FString SessionName);
    void QAStreamingForceUnload();
    void QASetPlayerStart(float locX, float locY, float locZ, float rotX, float rotY, float rotZ);
    void QASetPlayerRotation(float rotX, float rotY, float rotZ);
    void QARunForward(float Speed);
    void QARunAtDungeonExit();
    void QARunAtDungeonEntrance();
    void QARecordPlayerLocation(FString IdentifyingString);
    void QAPressButtonConsole(FString ButtonName, float TimePressed);
    void QAPlayerLookInDirection(float AroundY);
    void QALookAtActor(FString ActorName, float Target);
    void QALockPlayerPosition(bool Set, float X, float Y, float Z);
    void QALockPlayerAtCurrentPosition(bool Set);
    void QALocationLogRemoveLast();
    void QALocationLogDump();
    void QALocationLogClear();
    void QALocationLogAdd(FString LocationName);
    void QALevelUp();
    void QAKillNearestEnemy();
    void QAKillEnemiesInRadius(float Radius);
    void QAIsLevelLoaded();
    void QAHoldMMUntilFinishedStreaming();
    void QAGoToPosition(float X, float Y, float Z);
    void QAGodMode();
    void QAGivePlayerResource(FString ResourceType, float Amount);
    void QAGivePlayer(FString Item);
    void QAGetUpscaleMode();
    void QAGetTODLocations(FString TODGroup);
    void QAGetTime();
    void QAGetScreenResolution();
    void QAGetPSOProgress();
    void QAGetPOIs(FString SearchString);
    void QAGetPlayerWorldLocation();
    void QAGetPlayerInformation();
    void QAGetPlatform();
    void QAGetOverlandTileInformation();
    void QAGetOverlandLightProbeCaptureTimes();
    void QAGetNearbyEnemies();
    void QAGetNearbyActors();
    void QAGetGameStateInformation();
    void QAGetCL();
    void QAGetCameraInformation();
    void QAGetAverageFrametime(int32_t FrameSampleCount, int32_t SampleFrequencyMS);
    void QAGetAllLocation(FString ActorName);
    void QACameraLookInDirection(float AroundY, float AroundZ);
    static bool InputKeyConsoleCommand(FString KeyStates, FString Button);
    void HoldStreamingUpdate();
    void ButtonDelegate(FKey Key);
}; // Size: 0xd8
#pragma pack(pop)
