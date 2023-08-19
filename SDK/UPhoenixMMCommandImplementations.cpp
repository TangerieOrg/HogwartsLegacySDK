#include "FKey.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMastermindDebugCommandManager.hpp"
#include "UPhoenixMMCommandImplementations.hpp"
void UPhoenixMMCommandImplementations::QAGetCameraInformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetCameraInformation"));
    struct Params_QAGetCameraInformation {
    }; // Size: 0x0
    Params_QAGetCameraInformation params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAPressButtonConsole(FString ButtonName, float TimePressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAPressButtonConsole"));
    struct Params_QAPressButtonConsole {
        FString ButtonName; // 0x0
        float TimePressed; // 0x10
    }; // Size: 0x14
    Params_QAPressButtonConsole params{};
    params.ButtonName = (FString)ButtonName;
    params.TimePressed = (float)TimePressed;
    ProcessEvent(func, &params);
}
UPhoenixMMCommandImplementations* UPhoenixMMCommandImplementations::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixMMCommandImplementations");
    return (UPhoenixMMCommandImplementations*)res;
}
void UPhoenixMMCommandImplementations::ToggleWorldBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.ToggleWorldBounds"));
    struct Params_ToggleWorldBounds {
    }; // Size: 0x0
    Params_ToggleWorldBounds params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::RunAtDungeonDelegate(FVector TargetLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.RunAtDungeonDelegate"));
    struct Params_RunAtDungeonDelegate {
        FVector TargetLocation; // 0x0
    }; // Size: 0xc
    Params_RunAtDungeonDelegate params{};
    params.TargetLocation = (FVector)TargetLocation;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAStreamingRecordSession(FString SessionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAStreamingRecordSession"));
    struct Params_QAStreamingRecordSession {
        FString SessionName; // 0x0
    }; // Size: 0x10
    Params_QAStreamingRecordSession params{};
    params.SessionName = (FString)SessionName;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::ReleaseCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.ReleaseCamera"));
    struct Params_ReleaseCamera {
    }; // Size: 0x0
    Params_ReleaseCamera params{};
    ProcessEvent(func, &params);
}
bool UPhoenixMMCommandImplementations::ToggleWImGUIMainWindow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.ToggleWImGUIMainWindow"));
    struct Params_ToggleWImGUIMainWindow {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ToggleWImGUIMainWindow params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixMMCommandImplementations::RunAtDungeonExitDelegate(FVector TargetLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.RunAtDungeonExitDelegate"));
    struct Params_RunAtDungeonExitDelegate {
        FVector TargetLocation; // 0x0
    }; // Size: 0xc
    Params_RunAtDungeonExitDelegate params{};
    params.TargetLocation = (FVector)TargetLocation;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetOverlandLightProbeCaptureTimes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetOverlandLightProbeCaptureTimes"));
    struct Params_QAGetOverlandLightProbeCaptureTimes {
    }; // Size: 0x0
    Params_QAGetOverlandLightProbeCaptureTimes params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QATargetNearestEnemy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QATargetNearestEnemy"));
    struct Params_QATargetNearestEnemy {
    }; // Size: 0x0
    Params_QATargetNearestEnemy params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALocationLogRemoveLast() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALocationLogRemoveLast"));
    struct Params_QALocationLogRemoveLast {
    }; // Size: 0x0
    Params_QALocationLogRemoveLast params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAStreamingForceUnload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAStreamingForceUnload"));
    struct Params_QAStreamingForceUnload {
    }; // Size: 0x0
    Params_QAStreamingForceUnload params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QASetPlayerStart(float locX, float locY, float locZ, float rotX, float rotY, float rotZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QASetPlayerStart"));
    struct Params_QASetPlayerStart {
        float locX; // 0x0
        float locY; // 0x4
        float locZ; // 0x8
        float rotX; // 0xc
        float rotY; // 0x10
        float rotZ; // 0x14
    }; // Size: 0x18
    Params_QASetPlayerStart params{};
    params.locX = (float)locX;
    params.locY = (float)locY;
    params.locZ = (float)locZ;
    params.rotX = (float)rotX;
    params.rotY = (float)rotY;
    params.rotZ = (float)rotZ;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetUpscaleMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetUpscaleMode"));
    struct Params_QAGetUpscaleMode {
    }; // Size: 0x0
    Params_QAGetUpscaleMode params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QASetPlayerRotation(float rotX, float rotY, float rotZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QASetPlayerRotation"));
    struct Params_QASetPlayerRotation {
        float rotX; // 0x0
        float rotY; // 0x4
        float rotZ; // 0x8
    }; // Size: 0xc
    Params_QASetPlayerRotation params{};
    params.rotX = (float)rotX;
    params.rotY = (float)rotY;
    params.rotZ = (float)rotZ;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetPlatform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetPlatform"));
    struct Params_QAGetPlatform {
    }; // Size: 0x0
    Params_QAGetPlatform params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QARunForward(float Speed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QARunForward"));
    struct Params_QARunForward {
        float Speed; // 0x0
    }; // Size: 0x4
    Params_QARunForward params{};
    params.Speed = (float)Speed;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetNearbyActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetNearbyActors"));
    struct Params_QAGetNearbyActors {
    }; // Size: 0x0
    Params_QAGetNearbyActors params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QARunAtDungeonExit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QARunAtDungeonExit"));
    struct Params_QARunAtDungeonExit {
    }; // Size: 0x0
    Params_QARunAtDungeonExit params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALocationLogAdd(FString LocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALocationLogAdd"));
    struct Params_QALocationLogAdd {
        FString LocationName; // 0x0
    }; // Size: 0x10
    Params_QALocationLogAdd params{};
    params.LocationName = (FString)LocationName;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QARunAtDungeonEntrance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QARunAtDungeonEntrance"));
    struct Params_QARunAtDungeonEntrance {
    }; // Size: 0x0
    Params_QARunAtDungeonEntrance params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QARecordPlayerLocation(FString IdentifyingString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QARecordPlayerLocation"));
    struct Params_QARecordPlayerLocation {
        FString IdentifyingString; // 0x0
    }; // Size: 0x10
    Params_QARecordPlayerLocation params{};
    params.IdentifyingString = (FString)IdentifyingString;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAPlayerLookInDirection(float AroundY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAPlayerLookInDirection"));
    struct Params_QAPlayerLookInDirection {
        float AroundY; // 0x0
    }; // Size: 0x4
    Params_QAPlayerLookInDirection params{};
    params.AroundY = (float)AroundY;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALookAtActor(FString ActorName, float Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALookAtActor"));
    struct Params_QALookAtActor {
        FString ActorName; // 0x0
        float Target; // 0x10
    }; // Size: 0x14
    Params_QALookAtActor params{};
    params.ActorName = (FString)ActorName;
    params.Target = (float)Target;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAKillNearestEnemy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAKillNearestEnemy"));
    struct Params_QAKillNearestEnemy {
    }; // Size: 0x0
    Params_QAKillNearestEnemy params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALockPlayerPosition(bool Set, float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALockPlayerPosition"));
    struct Params_QALockPlayerPosition {
        bool Set; // 0x0
        char pad_1[0x3];
        float X; // 0x4
        float Y; // 0x8
        float Z; // 0xc
    }; // Size: 0x10
    Params_QALockPlayerPosition params{};
    params.Set = (bool)Set;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALockPlayerAtCurrentPosition(bool Set) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALockPlayerAtCurrentPosition"));
    struct Params_QALockPlayerAtCurrentPosition {
        bool Set; // 0x0
    }; // Size: 0x1
    Params_QALockPlayerAtCurrentPosition params{};
    params.Set = (bool)Set;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGoToPosition(float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGoToPosition"));
    struct Params_QAGoToPosition {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
    }; // Size: 0xc
    Params_QAGoToPosition params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALocationLogDump() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALocationLogDump"));
    struct Params_QALocationLogDump {
    }; // Size: 0x0
    Params_QALocationLogDump params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetPlayerWorldLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetPlayerWorldLocation"));
    struct Params_QAGetPlayerWorldLocation {
    }; // Size: 0x0
    Params_QAGetPlayerWorldLocation params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALocationLogClear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALocationLogClear"));
    struct Params_QALocationLogClear {
    }; // Size: 0x0
    Params_QALocationLogClear params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QALevelUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QALevelUp"));
    struct Params_QALevelUp {
    }; // Size: 0x0
    Params_QALevelUp params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAKillEnemiesInRadius(float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAKillEnemiesInRadius"));
    struct Params_QAKillEnemiesInRadius {
        float Radius; // 0x0
    }; // Size: 0x4
    Params_QAKillEnemiesInRadius params{};
    params.Radius = (float)Radius;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAIsLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAIsLevelLoaded"));
    struct Params_QAIsLevelLoaded {
    }; // Size: 0x0
    Params_QAIsLevelLoaded params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAHoldMMUntilFinishedStreaming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAHoldMMUntilFinishedStreaming"));
    struct Params_QAHoldMMUntilFinishedStreaming {
    }; // Size: 0x0
    Params_QAHoldMMUntilFinishedStreaming params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetNearbyEnemies() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetNearbyEnemies"));
    struct Params_QAGetNearbyEnemies {
    }; // Size: 0x0
    Params_QAGetNearbyEnemies params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGodMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGodMode"));
    struct Params_QAGodMode {
    }; // Size: 0x0
    Params_QAGodMode params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetGameStateInformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetGameStateInformation"));
    struct Params_QAGetGameStateInformation {
    }; // Size: 0x0
    Params_QAGetGameStateInformation params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGivePlayerResource(FString ResourceType, float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGivePlayerResource"));
    struct Params_QAGivePlayerResource {
        FString ResourceType; // 0x0
        float Amount; // 0x10
    }; // Size: 0x14
    Params_QAGivePlayerResource params{};
    params.ResourceType = (FString)ResourceType;
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGivePlayer(FString Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGivePlayer"));
    struct Params_QAGivePlayer {
        FString Item; // 0x0
    }; // Size: 0x10
    Params_QAGivePlayer params{};
    params.Item = (FString)Item;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetTODLocations(FString TODGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetTODLocations"));
    struct Params_QAGetTODLocations {
        FString TODGroup; // 0x0
    }; // Size: 0x10
    Params_QAGetTODLocations params{};
    params.TODGroup = (FString)TODGroup;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetPSOProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetPSOProgress"));
    struct Params_QAGetPSOProgress {
    }; // Size: 0x0
    Params_QAGetPSOProgress params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetTime"));
    struct Params_QAGetTime {
    }; // Size: 0x0
    Params_QAGetTime params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::HoldStreamingUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.HoldStreamingUpdate"));
    struct Params_HoldStreamingUpdate {
    }; // Size: 0x0
    Params_HoldStreamingUpdate params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetScreenResolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetScreenResolution"));
    struct Params_QAGetScreenResolution {
    }; // Size: 0x0
    Params_QAGetScreenResolution params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetPOIs(FString SearchString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetPOIs"));
    struct Params_QAGetPOIs {
        FString SearchString; // 0x0
    }; // Size: 0x10
    Params_QAGetPOIs params{};
    params.SearchString = (FString)SearchString;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetPlayerInformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetPlayerInformation"));
    struct Params_QAGetPlayerInformation {
    }; // Size: 0x0
    Params_QAGetPlayerInformation params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetOverlandTileInformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetOverlandTileInformation"));
    struct Params_QAGetOverlandTileInformation {
    }; // Size: 0x0
    Params_QAGetOverlandTileInformation params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetCL() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetCL"));
    struct Params_QAGetCL {
    }; // Size: 0x0
    Params_QAGetCL params{};
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetAverageFrametime(int32_t FrameSampleCount, int32_t SampleFrequencyMS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetAverageFrametime"));
    struct Params_QAGetAverageFrametime {
        int32_t FrameSampleCount; // 0x0
        int32_t SampleFrequencyMS; // 0x4
    }; // Size: 0x8
    Params_QAGetAverageFrametime params{};
    params.FrameSampleCount = (int32_t)FrameSampleCount;
    params.SampleFrequencyMS = (int32_t)SampleFrequencyMS;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QAGetAllLocation(FString ActorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QAGetAllLocation"));
    struct Params_QAGetAllLocation {
        FString ActorName; // 0x0
    }; // Size: 0x10
    Params_QAGetAllLocation params{};
    params.ActorName = (FString)ActorName;
    ProcessEvent(func, &params);
}
void UPhoenixMMCommandImplementations::QACameraLookInDirection(float AroundY, float AroundZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.QACameraLookInDirection"));
    struct Params_QACameraLookInDirection {
        float AroundY; // 0x0
        float AroundZ; // 0x4
    }; // Size: 0x8
    Params_QACameraLookInDirection params{};
    params.AroundY = (float)AroundY;
    params.AroundZ = (float)AroundZ;
    ProcessEvent(func, &params);
}
bool UPhoenixMMCommandImplementations::InputKeyConsoleCommand(FString KeyStates, FString Button) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.InputKeyConsoleCommand"));
    struct Params_InputKeyConsoleCommand {
        FString KeyStates; // 0x0
        FString Button; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_InputKeyConsoleCommand params{};
    params.KeyStates = (FString)KeyStates;
    params.Button = (FString)Button;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixMMCommandImplementations::ButtonDelegate(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixMMCommandImplementations.ButtonDelegate"));
    struct Params_ButtonDelegate {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_ButtonDelegate params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
