#include "AActor.hpp"
#include "ABP_AmbientPathEffects_C.hpp"
#include "ATriggerVolume.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_InputSelection\Type.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UBillboardComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPointLightComponent.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_AmbientPathEffects_C::BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
ABP_AmbientPathEffects_C* ABP_AmbientPathEffects_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C");
    return (ABP_AmbientPathEffects_C*)res;
}
void ABP_AmbientPathEffects_C::UserConstructionScript0(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform Temp_struct_Variable, int32_t CallFunc_Array_Length_ReturnValue, USplineComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        FTransform Temp_struct_Variable; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x40
        char pad_44[0x4];
        USplineComponent* CallFunc_AddComponent_ReturnValue; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x50
    }; // Size: 0x51
    Params_UserConstructionScript params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (USplineComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::SpawnParticles() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.SpawnParticles"));
    struct Params_SpawnParticles {
    }; // Size: 0x0
    Params_SpawnParticles params{};
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::CheckIfParticlesCanBePlayed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.CheckIfParticlesCanBePlayed"));
    struct Params_CheckIfParticlesCanBePlayed {
    }; // Size: 0x0
    Params_CheckIfParticlesCanBePlayed params{};
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::CheckIfSFXCanBePlayed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.CheckIfSFXCanBePlayed"));
    struct Params_CheckIfSFXCanBePlayed {
    }; // Size: 0x0
    Params_CheckIfSFXCanBePlayed params{};
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_AmbientPathEffects.BP_AmbientPathEffects_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_AmbientPathEffects_C::ExecuteUbergraph_BP_AmbientPathEffects(int32_t EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_2, FTransform Temp_struct_Variable, bool Temp_bool_IsClosed_Variable_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_2, int32_t CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, bool Temp_bool_IsClosed_Variable_3, AActor* K2Node_ComponentBoundEvent_OverlappedActor_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, AActor* K2Node_ComponentBoundEvent_OverlappedActor, AActor* K2Node_ComponentBoundEvent_OtherActor, USplineComponent* CallFunc_Array_Get_Item_1, float CallFunc_GetSplineLength_ReturnValue) {}
