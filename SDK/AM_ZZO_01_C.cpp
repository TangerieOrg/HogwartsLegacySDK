#include "AActor.hpp"
#include "ABP_WallaTrigger_C.hpp"
#include "ADynamicObjectVolume.hpp"
#include "ALevelScriptActor.hpp"
#include "AM_ZZO_01_C.hpp"
#include "ASpellTool.hpp"
#include "FDialogueConversationReference.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USpellToolRecord.hpp"
void AM_ZZO_01_C::BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::DialogueFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.DialogueFinished"));
    struct Params_DialogueFinished {
    }; // Size: 0x0
    Params_DialogueFinished params{};
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::OnActorSpawnedEvent_Event_0(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.OnActorSpawnedEvent_Event_0"));
    struct Params_OnActorSpawnedEvent_Event_0 {
        AActor* SpawnedActor; // 0x0
        FName GroupName; // 0x8
    }; // Size: 0x10
    Params_OnActorSpawnedEvent_Event_0 params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
AM_ZZO_01_C* AM_ZZO_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C");
    return (AM_ZZO_01_C*)res;
}
void AM_ZZO_01_C::OnCharacterHitBySpell_Event_0(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult Hit, FVector ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.OnCharacterHitBySpell_Event_0"));
    struct Params_OnCharacterHitBySpell_Event_0 {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnCharacterHitBySpell_Event_0 params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::ZZO_01_Updated(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.ZZO_01_Updated"));
    struct Params_ZZO_01_Updated {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_ZZO_01_Updated params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void AM_ZZO_01_C::PlayDialog(FString NPC, FDialogueConversationReference NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.PlayDialog"));
    struct Params_PlayDialog {
        FString NPC; // 0x0
        FDialogueConversationReference NewParam; // 0x10
    }; // Size: 0x20
    Params_PlayDialog params{};
    params.NPC = (FString)NPC;
    params.NewParam = (FDialogueConversationReference)NewParam;
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::BndEvt__M_ZZO_01_TriggerBoxStudentVOTrigger_ZZO_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.BndEvt__M_ZZO_01_TriggerBoxStudentVOTrigger_ZZO_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__M_ZZO_01_TriggerBoxStudentVOTrigger_ZZO_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__M_ZZO_01_TriggerBoxStudentVOTrigger_ZZO_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__M_ZZO_01_TriggerWaitTutorial_ZZO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::BndEvt__M_ZZO_01_TriggerBox_DestroyDummy_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZO_01_8.M_ZZO_01_C.BndEvt__M_ZZO_01_TriggerBox_DestroyDummy_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__M_ZZO_01_TriggerBox_DestroyDummy_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__M_ZZO_01_TriggerBox_DestroyDummy_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AM_ZZO_01_C::ExecuteUbergraph_M_ZZO_01(int32_t EntryPoint) {}
