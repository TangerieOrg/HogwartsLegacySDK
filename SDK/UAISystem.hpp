#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FSoftClassPath.hpp"
#include "UAISystemBase.hpp"
class UBehaviorTreeManager;
class UEnvQueryManager;
class UNavLocalGridManager;
class UAIPerceptionSystem;
class UAIAsyncTaskBlueprintProxy;
class UAIHotSpotManager;
#pragma pack(push, 1)
class UAISystem : public UAISystemBase {
public:
    FSoftClassPath PerceptionSystemClassName; // 0x58
    FSoftClassPath HotSpotManagerClassName; // 0x70
    float AcceptanceRadius; // 0x88
    float PathfollowingRegularPathPointAcceptanceRadius; // 0x8c
    float PathfollowingNavLinkAcceptanceRadius; // 0x90
    bool bFinishMoveOnGoalOverlap; // 0x94
    bool bAcceptPartialPaths; // 0x95
    bool bAllowStrafing; // 0x96
    bool bEnableBTAITasks; // 0x97
    bool bAllowControllersAsEQSQuerier; // 0x98
    bool bEnableDebuggerPlugin; // 0x99
    bool bForgetStaleActors; // 0x9a
    bool bAddBlackboardSelfKey; // 0x9b
    ECollisionChannel DefaultSightCollisionChannel; // 0x9c
    char pad_9d[0x3];
    UBehaviorTreeManager* BehaviorTreeManager; // 0xa0
    UEnvQueryManager* EnvironmentQueryManager; // 0xa8
    UAIPerceptionSystem* PerceptionSystem; // 0xb0
    TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xb8
    UAIHotSpotManager* HotSpotManager; // 0xc8
    UNavLocalGridManager* NavLocalGrids; // 0xd0
    char pad_d8[0x58];
    static UAISystem* StaticClass();
    void AILoggingVerbose();
    void AIIgnorePlayers();
}; // Size: 0x130
#pragma pack(pop)
