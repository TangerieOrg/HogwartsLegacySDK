#include "AActor.hpp"
#include "ABP_SpiderBase_C.hpp"
#include "ABP_SpiderBase_Medium_C.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_NPC_MovementCapsuleComponent_C.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
ABP_SpiderBase_Medium_C* ABP_SpiderBase_Medium_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C");
    return (ABP_SpiderBase_Medium_C*)res;
}
void ABP_SpiderBase_Medium_C::BndEvt__MeleeCapsuleMain_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C.BndEvt__MeleeCapsuleMain_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__MeleeCapsuleMain_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__MeleeCapsuleMain_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_SpiderBase_Medium_C::AttackCollisionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C.AttackCollisionStart"));
    struct Params_AttackCollisionStart {
    }; // Size: 0x0
    Params_AttackCollisionStart params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_Medium_C::UserConstructionScript0(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x0
        bool CallFunc_K2_AttachToComponent_ReturnValue_1; // 0x1
    }; // Size: 0x2
    Params_UserConstructionScript params{};
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_K2_AttachToComponent_ReturnValue_1 = (bool)CallFunc_K2_AttachToComponent_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_Medium_C::BndEvt__MeleeCapsuleFront_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C.BndEvt__MeleeCapsuleFront_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__MeleeCapsuleFront_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__MeleeCapsuleFront_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_SpiderBase_Medium_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_Medium_C::AttackCollisionStop() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C.AttackCollisionStop"));
    struct Params_AttackCollisionStop {
    }; // Size: 0x0
    Params_AttackCollisionStop params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_Medium_C::ExecuteUbergraph_BP_SpiderBase_Medium(int32_t EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, FHitResult K2Node_ComponentBoundEvent_SweepResult_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Medium.BP_SpiderBase_Medium_C.ExecuteUbergraph_BP_SpiderBase_Medium"));
    struct Params_ExecuteUbergraph_BP_SpiderBase_Medium {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent; // 0x8
        AActor* K2Node_ComponentBoundEvent_OtherActor; // 0x10
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp; // 0x18
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex; // 0x20
        bool K2Node_ComponentBoundEvent_bFromSweep; // 0x24
        char pad_25[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult; // 0x28
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1; // 0xb0
        AActor* K2Node_ComponentBoundEvent_OtherActor_1; // 0xb8
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1; // 0xc0
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1; // 0xc8
        bool K2Node_ComponentBoundEvent_bFromSweep_1; // 0xcc
        char pad_cd[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult_1; // 0xd0
    }; // Size: 0x158
    Params_ExecuteUbergraph_BP_SpiderBase_Medium params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_ComponentBoundEvent_OverlappedComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent;
    params.K2Node_ComponentBoundEvent_OtherActor = (AActor*)K2Node_ComponentBoundEvent_OtherActor;
    params.K2Node_ComponentBoundEvent_OtherComp = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex;
    params.K2Node_ComponentBoundEvent_bFromSweep = (bool)K2Node_ComponentBoundEvent_bFromSweep;
    params.K2Node_ComponentBoundEvent_SweepResult = (FHitResult)K2Node_ComponentBoundEvent_SweepResult;
    params.K2Node_ComponentBoundEvent_OverlappedComponent_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent_1;
    params.K2Node_ComponentBoundEvent_OtherActor_1 = (AActor*)K2Node_ComponentBoundEvent_OtherActor_1;
    params.K2Node_ComponentBoundEvent_OtherComp_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp_1;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex_1;
    params.K2Node_ComponentBoundEvent_bFromSweep_1 = (bool)K2Node_ComponentBoundEvent_bFromSweep_1;
    params.K2Node_ComponentBoundEvent_SweepResult_1 = (FHitResult)K2Node_ComponentBoundEvent_SweepResult_1;
    ProcessEvent(func, &params);
}
