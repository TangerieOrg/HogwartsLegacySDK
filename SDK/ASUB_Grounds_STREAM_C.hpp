#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class AAvaLevelStreamingVolumeSet;
class AActor;
#pragma pack(push, 1)
class ASUB_Grounds_STREAM_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    AAvaLevelStreamingVolumeSet* SVS_P3_GroundsS_EXT_ExecuteUbergraph_SUB_Grounds_STREAM_RefProperty; // 0x258
    static ASUB_Grounds_STREAM_C* StaticClass();
    void ReceiveBeginPlay();
    void BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void ExecuteUbergraph_SUB_Grounds_STREAM(int32_t EntryPoint, AActor* K2Node_ActorBoundEvent_OverlappedActor, AActor* K2Node_ActorBoundEvent_OtherActor, AActor* K2Node_ActorBoundEvent_OverlappedActor_1, AActor* K2Node_ActorBoundEvent_OtherActor_1);
}; // Size: 0x260
#pragma pack(pop)
