#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EPerformTaskSplineTypes.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FSplinePoint.hpp"
class UPathComponent;
class UScheduledEntity;
#pragma pack(push, 1)
class ASimpleSplineFollowerForAI : public AActor {
public:
    UPathComponent* PathComponent; // 0x248
    bool bDebugSpline; // 0x250
    EPerformTaskSplineTypes SplineType; // 0x251
    bool bSprintSplineType; // 0x252
    bool bStartAtSplineStart; // 0x253
    char pad_254[0x4];
    FDbSingleColumnInfo MissionID; // 0x258
    int32_t MissionUID; // 0x2e0
    char pad_2e4[0x4];
    TArray<FSplinePoint> SplinePointsFromOtherSpline; // 0x2e8
    ASimpleSplineFollowerForAI* OtherSplinePath; // 0x2f8
    char pad_300[0x48];
    static ASimpleSplineFollowerForAI* StaticClass();
    void StartAIMovementOnSpline(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits);
    void OnFleshLoadComplete(AActor* FleshActor);
    void MoveOnSplineFleshLoad(AActor* FleshActor);
    void CreateSplineFromGivenPoints();
}; // Size: 0x348
#pragma pack(pop)
