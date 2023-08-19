#pragma once
#include <cstdint>
#include "ECalloutActions.hpp"
#include "ECalloutBlipType.hpp"
#include "ECalloutType.hpp"
#include "ESocialCombatMode.hpp"
#include "FSlateColor.hpp"
#include "FVector.hpp"
#include "UAIPerceptionStimuliSourceComponent.hpp"
class UCogGroupEvaluation;
class UCogGroupTargetPoint;
class UCogGroupLookAtPoint;
class UAISenseFOVDetails;
class UClass;
class UAISenseSpecificDetails;
class AController;
struct FCalloutInformation;
#pragma pack(push, 1)
class UCognitionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent {
public:
    char pad_e0[0x50];
    TArray<UCogGroupEvaluation*> TargetEvaluationArray; // 0x130
    float FootprintRadius; // 0x140
    float TopOffset; // 0x144
    float BottomOffset; // 0x148
    float PriorityWeight; // 0x14c
    float VsPlayerPriorityWeightBump; // 0x150
    float FarDistance_Override; // 0x154
    float FOV_Override; // 0x158
    ESocialCombatMode SocialORCombatMode; // 0x15c
    bool bIgnoreLineOfSight; // 0x15d
    bool bIgnoreScreenSpace; // 0x15e
    bool bSpecialOnScreenTarget; // 0x15f
    bool bDisallowInteractInCombat; // 0x160
    bool bDisallowAimTargeting; // 0x161
    char pad_162[0x6];
    UCogGroupTargetPoint* TargetPointClass; // 0x168
    UCogGroupLookAtPoint* LookAtPointClass; // 0x170
    FVector CalloutOffset; // 0x178
    char pad_184[0x4];
    TArray<UAISenseFOVDetails*> TargetFOVDetails; // 0x188
    bool bLockOnEnabled; // 0x198
    char pad_199[0x3];
    float MaxLockOnDistance; // 0x19c
    bool bRecordInteractLocation; // 0x1a0
    bool bAllowTargetWhileStandingOn; // 0x1a1
    bool bOverrideMinAimDistance; // 0x1a2
    char pad_1a3[0x1];
    float MinAimDistance; // 0x1a4
    ECalloutType CalloutType; // 0x1a8
    ECalloutBlipType CalloutBlipType; // 0x1a9
    ECalloutActions CalloutAction; // 0x1aa
    char pad_1ab[0x1d];
    FSlateColor CalloutTextColor; // 0x1c8
    bool bGrayOutButton; // 0x1f0
    bool bIsTargetTextTranslatable; // 0x1f1
    char pad_1f2[0x2];
    FVector CustomTargetPoint; // 0x1f4
    FVector CustomLookAtPoint; // 0x200
    float ChargeTime; // 0x20c
    float CalloutInteractDistance; // 0x210
    char pad_214[0xac];
    static UCognitionStimuliSourceComponent* StaticClass();
    void SetPriorityWeight(float weight);
    void SetIgnoreLineOfSight(bool bFlag);
    void SetFootprintRadius(float Radius);
    void SetAutoRegisterAsSource(bool bFlag);
    bool IsRegisteredForSense(UClass* SenseToFind);
    bool IsOwned();
    UAISenseSpecificDetails* GetSenseSpecificDetails(UClass* InSense);
    float GetPriorityWeight();
    bool GetIgnoreLineOfSight();
    float GetFootprintRadius();
    bool GetAutoRegisterAsSource();
    void ChangeInformation(FCalloutInformation& NewInformation);
    float CalculateRadiusNeededToBePerceivedBy(float DistanceFromPerceiver, AController* PerceiverController, UClass* SenseToUse, bool bIncludePerceiverRadius);
    void AddRegisterAsSourceForSenses(UClass*& Sense);
}; // Size: 0x2c0
#pragma pack(pop)
