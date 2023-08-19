#include "AActor.hpp"
#include "ABP_VFX_Container_C.hpp"
#include "ABP_VFX_Trigger_Volume_C.hpp"
#include "ABiped_Player.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_TriggerVolumes_Niagara.hpp"
#include "FSTR_TriggerVolumes_Particles.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UBillboardComponent.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void ABP_VFX_Trigger_Volume_C::ExecuteUbergraph_BP_VFX_Trigger_Volume(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetUnscaledBoxExtent_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_VFX_Container_C* CallFunc_FinishSpawningActor_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOverlappingActor_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_IsPointInBox_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.ExecuteUbergraph_BP_VFX_Trigger_Volume"));
    struct Params_ExecuteUbergraph_BP_VFX_Trigger_Volume {
        int32_t EntryPoint; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x4
        bool CallFunc_IsValid_ReturnValue_1; // 0x5
        char pad_6[0x2];
        FVector CallFunc_GetUnscaledBoxExtent_ReturnValue; // 0x8
        char pad_14[0xc];
        FTransform CallFunc_K2_GetComponentToWorld_ReturnValue; // 0x20
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x50
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x80
        ABP_VFX_Container_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x88
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent; // 0x90
        AActor* K2Node_ComponentBoundEvent_OtherActor; // 0x98
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp; // 0xa0
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex; // 0xa8
        char pad_ac[0x4];
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1; // 0xb0
        AActor* K2Node_ComponentBoundEvent_OtherActor_1; // 0xb8
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1; // 0xc0
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1; // 0xc8
        bool K2Node_ComponentBoundEvent_bFromSweep; // 0xcc
        char pad_cd[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult; // 0xd0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x158
        bool K2Node_DynamicCast_bSuccess; // 0x160
        char pad_161[0x7];
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1; // 0x168
        bool K2Node_DynamicCast_bSuccess_1; // 0x170
        bool CallFunc_IsOverlappingActor_ReturnValue; // 0x171
        char pad_172[0x6];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x178
        bool CallFunc_IsValid_ReturnValue_2; // 0x180
        char pad_181[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x184
        FVector CallFunc_InverseTransformLocation_ReturnValue; // 0x190
        bool CallFunc_IsPointInBox_ReturnValue; // 0x19c
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x19d
    }; // Size: 0x19e
    Params_ExecuteUbergraph_BP_VFX_Trigger_Volume params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetUnscaledBoxExtent_ReturnValue = (FVector)CallFunc_GetUnscaledBoxExtent_ReturnValue;
    params.CallFunc_K2_GetComponentToWorld_ReturnValue = (FTransform)CallFunc_K2_GetComponentToWorld_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_VFX_Container_C*)CallFunc_FinishSpawningActor_ReturnValue;
    params.K2Node_ComponentBoundEvent_OverlappedComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent;
    params.K2Node_ComponentBoundEvent_OtherActor = (AActor*)K2Node_ComponentBoundEvent_OtherActor;
    params.K2Node_ComponentBoundEvent_OtherComp = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex;
    params.K2Node_ComponentBoundEvent_OverlappedComponent_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent_1;
    params.K2Node_ComponentBoundEvent_OtherActor_1 = (AActor*)K2Node_ComponentBoundEvent_OtherActor_1;
    params.K2Node_ComponentBoundEvent_OtherComp_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp_1;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex_1;
    params.K2Node_ComponentBoundEvent_bFromSweep = (bool)K2Node_ComponentBoundEvent_bFromSweep;
    params.K2Node_ComponentBoundEvent_SweepResult = (FHitResult)K2Node_ComponentBoundEvent_SweepResult;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBiped_Player_1 = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_IsOverlappingActor_ReturnValue = (bool)CallFunc_IsOverlappingActor_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_InverseTransformLocation_ReturnValue = (FVector)CallFunc_InverseTransformLocation_ReturnValue;
    params.CallFunc_IsPointInBox_ReturnValue = (bool)CallFunc_IsPointInBox_ReturnValue;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    ProcessEvent(func, &params);
}
ABP_VFX_Trigger_Volume_C* ABP_VFX_Trigger_Volume_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C");
    return (ABP_VFX_Trigger_Volume_C*)res;
}
void ABP_VFX_Trigger_Volume_C::UserConstructionScript0() {}
void ABP_VFX_Trigger_Volume_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_VFX_Trigger_Volume_C::Event_TriggerVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.Event TriggerVolume"));
    struct Params_Event_TriggerVolume {
    }; // Size: 0x0
    Params_Event_TriggerVolume params{};
    ProcessEvent(func, &params);
}
void ABP_VFX_Trigger_Volume_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_VFX_Trigger_Volume_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_VFX_Trigger_Volume_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
