#pragma once
#include <cstdint>
#include "ATriggerBox.hpp"
#include "EFocusTriggerType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FVector.hpp"
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class AFocusTrigger : public ATriggerBox {
public:
    EFocusTriggerType FocusTriggerType; // 0x250
    bool StartInactive; // 0x251
    char pad_252[0xe];
    FDbSingleColumnInfo AttachToDBID; // 0x260
    FVector TheAttachOffset; // 0x2e8
    FVector TheFocusOffset; // 0x2f4
    float TheFocusProbablity; // 0x300
    float TheActionProbablity; // 0x304
    float PlayerFocusProbablity; // 0x308
    float PlayerActionProbablity; // 0x30c
    FDbSingleColumnInfo TheReaction; // 0x310
    char pad_398[0x8];
    FDbSingleColumnInfo TheEmotion; // 0x3a0
    char pad_428[0x70];
    static AFocusTrigger* StaticClass();
    void SetTheReaction(SocialActionTypes InSocialAction);
    void SetTheFocusProbablity(float InProbability);
    void SetTheFocusOffset(FVector InFocusOffset);
    void SetTheFocusActor(AActor* InFocusActor);
    void SetTheEmotion(SocialSemanticIDs InEmotion);
    void SetTheActionProbablity(float InProbability);
    void SetPlayerFocusProbablity(float InProbability);
    void SetPlayerActionProbablity(float InProbability);
    void SetAbsoluteExtents(FVector& InAbsoluteExtents);
    void Deactivate();
    void ActorOverlapEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ActorOverlapBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo);
    void Activate();
}; // Size: 0x498
#pragma pack(pop)
