#include "AActor.hpp"
#include "AAvaLevelStreamingVolumeSet.hpp"
#include "ALevelScriptActor.hpp"
#include "ASUB_Grounds_STREAM_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
void ASUB_Grounds_STREAM_C::BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_GroundsQ/SUB_Grounds_STREAM_LvlInst_123.SUB_Grounds_STREAM_C.BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
ASUB_Grounds_STREAM_C* ASUB_Grounds_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GroundsQ/SUB_Grounds_STREAM_LvlInst_123.SUB_Grounds_STREAM_C");
    return (ASUB_Grounds_STREAM_C*)res;
}
void ASUB_Grounds_STREAM_C::BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_GroundsQ/SUB_Grounds_STREAM_LvlInst_123.SUB_Grounds_STREAM_C.BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__SpecialGroundsSVolumes_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ASUB_Grounds_STREAM_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_GroundsQ/SUB_Grounds_STREAM_LvlInst_123.SUB_Grounds_STREAM_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ASUB_Grounds_STREAM_C::ExecuteUbergraph_SUB_Grounds_STREAM(int32_t EntryPoint, AActor* K2Node_ActorBoundEvent_OverlappedActor, AActor* K2Node_ActorBoundEvent_OtherActor, AActor* K2Node_ActorBoundEvent_OverlappedActor_1, AActor* K2Node_ActorBoundEvent_OtherActor_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_GroundsQ/SUB_Grounds_STREAM_LvlInst_123.SUB_Grounds_STREAM_C.ExecuteUbergraph_SUB_Grounds_STREAM"));
    struct Params_ExecuteUbergraph_SUB_Grounds_STREAM {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_ActorBoundEvent_OverlappedActor; // 0x8
        AActor* K2Node_ActorBoundEvent_OtherActor; // 0x10
        AActor* K2Node_ActorBoundEvent_OverlappedActor_1; // 0x18
        AActor* K2Node_ActorBoundEvent_OtherActor_1; // 0x20
    }; // Size: 0x28
    Params_ExecuteUbergraph_SUB_Grounds_STREAM params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_ActorBoundEvent_OverlappedActor = (AActor*)K2Node_ActorBoundEvent_OverlappedActor;
    params.K2Node_ActorBoundEvent_OtherActor = (AActor*)K2Node_ActorBoundEvent_OtherActor;
    params.K2Node_ActorBoundEvent_OverlappedActor_1 = (AActor*)K2Node_ActorBoundEvent_OverlappedActor_1;
    params.K2Node_ActorBoundEvent_OtherActor_1 = (AActor*)K2Node_ActorBoundEvent_OtherActor_1;
    ProcessEvent(func, &params);
}
