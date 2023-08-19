#pragma once
#include <cstdint>
#include "AWorldEventActor.hpp"
#include "ETrainType.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class USkeletalMeshComponent;
class USceneComponent;
class UTrainNavigationSplineComponent;
#pragma pack(push, 1)
class ATrain : public AWorldEventActor {
public:
    char pad_280[0x14];
    ETrainType TrainType; // 0x294
    char pad_295[0x3];
    ATrain* DockedFront; // 0x298
    float DesiredSpeed; // 0x2a0
    float DistanceAlongTrack; // 0x2a4
    USkeletalMeshComponent* Train; // 0x2a8
    USkeletalMeshComponent* BogieFront; // 0x2b0
    USkeletalMeshComponent* BogieBack; // 0x2b8
    USceneComponent* FrontAttatchment; // 0x2c0
    USceneComponent* BackAttatchment; // 0x2c8
    char pad_2d0[0x78];
    UTrainNavigationSplineComponent* TrackSpline; // 0x348
    float AccelerationExp; // 0x350
    FVector TrainPositionOffset; // 0x354
    FVector BogiePositionOffset; // 0x360
    FRotator FrontBogieRotationOffset; // 0x36c
    FRotator BackBogieRotationOffset; // 0x378
    float RailZOffset; // 0x384
    float CurrentSpeed; // 0x388
    float SpeedToAnimationRatio; // 0x38c
    static ATrain* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
