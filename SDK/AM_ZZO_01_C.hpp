#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FDialogueConversationReference.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class AActor;
class ADynamicObjectVolume;
class UObject;
class ABP_WallaTrigger_C;
class ASpellTool;
class USpellToolRecord;
#pragma pack(push, 1)
class AM_ZZO_01_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    AActor* DUMMY; // 0x258
    bool Timeout; // 0x260
    char pad_261[0x7];
    ADynamicObjectVolume* DOV_ZZO_PracticeObjects_ExecuteUbergraph_M_ZZO_01_RefProperty; // 0x268
    ABP_WallaTrigger_C* BP_WallaTrigger_ZZO_ExecuteUbergraph_M_ZZO_01_RefProperty; // 0x270
    static AM_ZZO_01_C* StaticClass();
    void ReceiveBeginPlay();
    void PlayDialog(FString NPC, FDialogueConversationReference NewParam);
    void BndEvt__M_ZZO_01_TriggerBoxStudentVOTrigger_ZZO_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void OnActorSpawnedEvent_Event_0(AActor* SpawnedActor, FName& GroupName);
    void OnCharacterHitBySpell_Event_0(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult Hit, FVector ImpactDirection);
    void DialogueFinished();
    void ZZO_01_Updated(UObject* Caller, FName& String);
    void BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__M_ZZO_01_TriggerBox_DestroyDummy_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void ExecuteUbergraph_M_ZZO_01(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
