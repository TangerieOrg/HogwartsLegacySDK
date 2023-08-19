#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EMountTypes.hpp"
#include "E_Hog_CamTriggerShape\Type.hpp"
#include "FCharacterName.hpp"
#include "FDialogueConversationReference.hpp"
#include "FMissionName.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ABiped_Player;
class UStaticMeshComponent;
class UTextRenderComponent;
class UObject;
class UBoxComponent;
class UAvaAudioDialogueEvent;
class USceneComponent;
struct FHitResult;
class UCreature_MountComponent;
class UPrimitiveComponent;
struct FMissionID;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_Mission_VOTrigger_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UTextRenderComponent* TextRender; // 0x250
    UBoxComponent* Box; // 0x258
    UStaticMeshComponent* VOTrigger; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    E_Hog_CamTriggerShape::Type TriggerShape; // 0x270
    char pad_271[0x7];
    TArray<FMissionName> Mission_NewSetup; // 0x278
    TArray<FString> StepNickname; // 0x288
    TArray<FCharacterName> VO_Actor; // 0x298
    bool PlayerInTrigger; // 0x2a8
    bool BipedPlayerInTrigger; // 0x2a9
    bool PlayerMountInTrigger; // 0x2aa
    char pad_2ab[0x5];
    FDialogueConversationReference DialogueReference; // 0x2b0
    UAvaAudioDialogueEvent* DialogueEvent__Deprecated_; // 0x2c0
    int32_t N_Shot; // 0x2c8
    bool RepeatWhileInTrigger; // 0x2cc
    char pad_2cd[0x3];
    float RepeatMinDelay; // 0x2d0
    float RepeatMaxDelay; // 0x2d4
    bool SuppressWhenMissionGossipMuted; // 0x2d8
    char pad_2d9[0x7];
    TArray<AActor*> Students; // 0x2e0
    AActor* PlayOnThisActor; // 0x2f0
    bool TriggerVisibleInGame; // 0x2f8
    bool PrintDebug; // 0x2f9
    bool PlayOnExit; // 0x2fa
    char pad_2fb[0x5];
    TArray<FName> LockName; // 0x300
    TArray<FName> MissionNames; // 0x310
    TArray<FString> ActiveStepNicknames; // 0x320
    bool Active_; // 0x330
    bool MountCheck; // 0x331
    EMountTypes MountType; // 0x332
    char pad_333[0x1];
    float TriggerCooldown; // 0x334
    bool StartWithCooldown; // 0x338
    bool CompanionCheck; // 0x339
    char pad_33a[0x6];
    FString Start_time; // 0x340
    FString End_time; // 0x350
    bool Register_for_MEP_wait_event; // 0x360
    bool PlayOnlyIfTracked; // 0x361
    char pad_362[0x2];
    float MEP_wait_event_delay; // 0x364
    bool MEPEventRegistered; // 0x368
    char pad_369[0x3];
    FName KillStat; // 0x36c
    int32_t KillStatValue; // 0x374
    int32_t PlayerOverlapCounter; // 0x378
    char pad_37c[0x4];
    static ABP_Mission_VOTrigger_C* StaticClass();
    void CorrectTimeString(FString TimeString, FString& CorrectedTimeString, FString CallFunc_Left_ReturnValue, FString CallFunc_Right_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Left_ReturnValue_1, int32_t CallFunc_Len_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Right_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3);
    void GetTimeStringValid(FString TimeString, bool& Valid, bool CallFunc_Contains_ReturnValue);
    void ValidateTimeStrings(FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_CorrectTimeString_CorrectedTimeString, FString CallFunc_CorrectTimeString_CorrectedTimeString_1, bool CallFunc_GetTimeStringValid_Valid, bool CallFunc_GetTimeStringValid_Valid_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void UpdateIsPlayerInTrigger(bool CallFunc_BooleanOR_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreature_MountComponent* CallFunc_GetMount_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue_1);
    void UserConstructionScript0(bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4);
    void DialogComplete();
    void PlayVO();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void PlayVORepeat();
    void ReceiveBeginPlay0();
    void WhoIsHere();
    void SwitchOn(AActor* SwitchActor);
    void SwitchOff(AActor* SwitchActor);
    void RegisterMEPWait(bool Register);
    void MEPWaitComplete(UObject* Caller, FMissionID& MissionID);
    void ExecuteUbergraph_BP_Mission_VOTrigger(int32_t EntryPoint, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue);
}; // Size: 0x380
#pragma pack(pop)
