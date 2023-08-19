#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
class UStationComponent;
class AActor;
class UAnimSequence;
class UBTService_AvaAITree;
class USceneComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class AStation : public AWorldObject {
public:
    char pad_2b0[0x18];
    UStationComponent* StationComponent; // 0x2c8
    FDbSingleColumnInfo MissionID; // 0x2d0
    int32_t MissionUID; // 0x358
    char pad_35c[0xc];
    static AStation* StaticClass();
    static void TriggerSoloActionOnParticipants(AStation* InTargetStation, SocialActionTypes Story, SocialSemanticIDs Emotion, AActor* FocusActor);
    void Interact(UBTService_AvaAITree* AvaService);
    UStationComponent* GetStationComponent();
    USkeletalMeshComponent* CreateAndAttachSkeletalMeshComponent(UAnimSequence* AnimPose, USceneComponent* ParentProp, FName SocketName);
}; // Size: 0x368
#pragma pack(pop)
