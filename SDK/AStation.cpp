#include "AActor.hpp"
#include "AStation.hpp"
#include "AWorldObject.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
#include "UAnimSequence.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStationComponent.hpp"
AStation* AStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Station");
    return (AStation*)res;
}
void AStation::TriggerSoloActionOnParticipants(AStation* InTargetStation, SocialActionTypes Story, SocialSemanticIDs Emotion, AActor* FocusActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Station.TriggerSoloActionOnParticipants"));
    struct Params_TriggerSoloActionOnParticipants {
        AStation* InTargetStation; // 0x0
        SocialActionTypes Story; // 0x8
        SocialSemanticIDs Emotion; // 0x9
        char pad_a[0x6];
        AActor* FocusActor; // 0x10
    }; // Size: 0x18
    Params_TriggerSoloActionOnParticipants params{};
    params.InTargetStation = (AStation*)InTargetStation;
    params.Story = (SocialActionTypes)Story;
    params.Emotion = (SocialSemanticIDs)Emotion;
    params.FocusActor = (AActor*)FocusActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AStation::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Station.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
UStationComponent* AStation::GetStationComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Station.GetStationComponent"));
    struct Params_GetStationComponent {
        UStationComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetStationComponent params{};
    ProcessEvent(func, &params);
    return (UStationComponent*)params.ReturnValue;
}
USkeletalMeshComponent* AStation::CreateAndAttachSkeletalMeshComponent(UAnimSequence* AnimPose, USceneComponent* ParentProp, FName SocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Station.CreateAndAttachSkeletalMeshComponent"));
    struct Params_CreateAndAttachSkeletalMeshComponent {
        UAnimSequence* AnimPose; // 0x0
        USceneComponent* ParentProp; // 0x8
        FName SocketName; // 0x10
        USkeletalMeshComponent* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateAndAttachSkeletalMeshComponent params{};
    params.AnimPose = (UAnimSequence*)AnimPose;
    params.ParentProp = (USceneComponent*)ParentProp;
    params.SocketName = (FName)SocketName;
    ProcessEvent(func, &params);
    return (USkeletalMeshComponent*)params.ReturnValue;
}
