#include "AActor.hpp"
#include "ABP_CaveInElement_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSTR_CaveInParticleElement.hpp"
#include "FSTR_CaveIn_AnimMeshElement.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_CaveInElement_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
ABP_CaveInElement_C* ABP_CaveInElement_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C");
    return (ABP_CaveInElement_C*)res;
}
void ABP_CaveInElement_C::ExecuteUbergraph_BP_CaveInElement(int32_t EntryPoint, FSTR_CaveIn_AnimMeshElement K2Node_CustomEvent_MeshStruct, FSTR_CaveInParticleElement K2Node_CustomEvent_ParticleStruct, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_1, FTransform CallFunc_GetTransform_ReturnValue, UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_ComposeRotators_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_TLerp_ReturnValue, UStaticMeshComponent* K2Node_CustomEvent_NewParam, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_VLerp_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C.ExecuteUbergraph_BP_CaveInElement"));
    struct Params_ExecuteUbergraph_BP_CaveInElement {
        int32_t EntryPoint; // 0x0
        char pad_4[0xc];
        FSTR_CaveIn_AnimMeshElement K2Node_CustomEvent_MeshStruct; // 0x10
        FSTR_CaveInParticleElement K2Node_CustomEvent_ParticleStruct; // 0x70
        bool CallFunc_IsValid_ReturnValue; // 0xc0
        char pad_c1[0x3];
        FVector CallFunc_BreakTransform_Location; // 0xc4
        FRotator CallFunc_BreakTransform_Rotation; // 0xd0
        FVector CallFunc_BreakTransform_Scale; // 0xdc
        bool CallFunc_IsValid_ReturnValue_1; // 0xe8
        char pad_e9[0x7];
        FTransform CallFunc_GetTransform_ReturnValue; // 0xf0
        UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x120
        FVector CallFunc_BreakTransform_Location_1; // 0x128
        FRotator CallFunc_BreakTransform_Rotation_1; // 0x134
        FVector CallFunc_BreakTransform_Scale_1; // 0x140
        bool CallFunc_IsValid_ReturnValue_2; // 0x14c
        char pad_14d[0x3];
        FVector CallFunc_BreakTransform_Location_2; // 0x150
        FRotator CallFunc_BreakTransform_Rotation_2; // 0x15c
        FVector CallFunc_BreakTransform_Scale_2; // 0x168
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x174
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x180
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x18c
        FRotator CallFunc_ComposeRotators_ReturnValue; // 0x198
        char pad_1a4[0x4];
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x1a8
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x1b0
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x1bc
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x1c8
        char pad_1cc[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x1d0
        FTransform CallFunc_TLerp_ReturnValue; // 0x200
        UStaticMeshComponent* K2Node_CustomEvent_NewParam; // 0x230
        FHitResult CallFunc_K2_SetActorTransform_SweepHitResult; // 0x238
        bool CallFunc_K2_SetActorTransform_ReturnValue; // 0x2c0
        char pad_2c1[0x3];
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x2c4
        FVector CallFunc_Add_VectorVector_ReturnValue_2; // 0x2d0
        FVector CallFunc_VLerp_ReturnValue; // 0x2dc
        FVector CallFunc_VLerp_ReturnValue_1; // 0x2e8
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x2f4
    }; // Size: 0x37c
    Params_ExecuteUbergraph_BP_CaveInElement params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_MeshStruct = (FSTR_CaveIn_AnimMeshElement)K2Node_CustomEvent_MeshStruct;
    params.K2Node_CustomEvent_ParticleStruct = (FSTR_CaveInParticleElement)K2Node_CustomEvent_ParticleStruct;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UStaticMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_BreakTransform_Location_1 = (FVector)CallFunc_BreakTransform_Location_1;
    params.CallFunc_BreakTransform_Rotation_1 = (FRotator)CallFunc_BreakTransform_Rotation_1;
    params.CallFunc_BreakTransform_Scale_1 = (FVector)CallFunc_BreakTransform_Scale_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_BreakTransform_Location_2 = (FVector)CallFunc_BreakTransform_Location_2;
    params.CallFunc_BreakTransform_Rotation_2 = (FRotator)CallFunc_BreakTransform_Rotation_2;
    params.CallFunc_BreakTransform_Scale_2 = (FVector)CallFunc_BreakTransform_Scale_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_ComposeRotators_ReturnValue = (FRotator)CallFunc_ComposeRotators_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_TLerp_ReturnValue = (FTransform)CallFunc_TLerp_ReturnValue;
    params.K2Node_CustomEvent_NewParam = (UStaticMeshComponent*)K2Node_CustomEvent_NewParam;
    params.CallFunc_K2_SetActorTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetActorTransform_SweepHitResult;
    params.CallFunc_K2_SetActorTransform_ReturnValue = (bool)CallFunc_K2_SetActorTransform_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_2 = (FVector)CallFunc_Add_VectorVector_ReturnValue_2;
    params.CallFunc_VLerp_ReturnValue = (FVector)CallFunc_VLerp_ReturnValue;
    params.CallFunc_VLerp_ReturnValue_1 = (FVector)CallFunc_VLerp_ReturnValue_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    ProcessEvent(func, &params);
}
void ABP_CaveInElement_C::AnimateMesh__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C.AnimateMesh__FinishedFunc"));
    struct Params_AnimateMesh__FinishedFunc {
    }; // Size: 0x0
    Params_AnimateMesh__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_CaveInElement_C::AnimateMesh__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C.AnimateMesh__UpdateFunc"));
    struct Params_AnimateMesh__UpdateFunc {
    }; // Size: 0x0
    Params_AnimateMesh__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_CaveInElement_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_CaveInElement_C::ProcessElement(FSTR_CaveIn_AnimMeshElement MeshStruct, FSTR_CaveInParticleElement ParticleStruct) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C.ProcessElement"));
    struct Params_ProcessElement {
        FSTR_CaveIn_AnimMeshElement MeshStruct; // 0x0
        FSTR_CaveInParticleElement ParticleStruct; // 0x60
    }; // Size: 0xb0
    Params_ProcessElement params{};
    params.MeshStruct = (FSTR_CaveIn_AnimMeshElement)MeshStruct;
    params.ParticleStruct = (FSTR_CaveInParticleElement)ParticleStruct;
    ProcessEvent(func, &params);
}
void ABP_CaveInElement_C::RemoveMesh(UStaticMeshComponent* NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInElement.BP_CaveInElement_C.RemoveMesh"));
    struct Params_RemoveMesh {
        UStaticMeshComponent* NewParam; // 0x0
    }; // Size: 0x8
    Params_RemoveMesh params{};
    params.NewParam = (UStaticMeshComponent*)NewParam;
    ProcessEvent(func, &params);
}
