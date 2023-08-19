#pragma once
#include <cstdint>
#include "EBroomEnemyState\Type.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UBroomRiderActionBase.hpp"
class UFlyingBroomPhysics_Spline;
#pragma pack(push, 1)
class UBroomRiderAction_TravelToPoint : public UBroomRiderActionBase {
public:
    char pad_38[0x28];
    UFlyingBroomPhysics_Spline* PrevBroomPhysicsData; // 0x60
    bool bRestoreFlightDataOnFinish; // 0x68
    bool bLoopUntilMessage; // 0x69
    char pad_6a[0x6];
    FString MessageName; // 0x70
    int32_t Point; // 0x80
    bool bKeepPlayerCloseToNPC; // 0x84
    bool bSetStatOnPlayerLeaveNPC; // 0x85
    char pad_86[0x2];
    FDbSingleColumnInfo StatToSet; // 0x88
    int32_t StatValueToSet; // 0x110
    float MaxDistanceFromNPC; // 0x114
    float DistanceBehindNPCToResetTo; // 0x118
    EBroomEnemyState::Type BroomEnemyState; // 0x11c
    char pad_11d[0x2b];
    static UBroomRiderAction_TravelToPoint* StaticClass();
    void CheckPlayerDistanceToNPC();
}; // Size: 0x148
#pragma pack(pop)
