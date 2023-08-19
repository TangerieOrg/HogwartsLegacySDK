#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_B_Part_C.hpp"
#include "ABP_Torch_C.hpp"
#include "APawn.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "E_Size\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Sphinx_Puzzle_B_Part_C::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Start"));
    struct Params_Start {
    }; // Size: 0x0
    Params_Start params{};
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_B_Part_C* ABP_Sphinx_Puzzle_B_Part_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C");
    return (ABP_Sphinx_Puzzle_B_Part_C*)res;
}
void ABP_Sphinx_Puzzle_B_Part_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Fail__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Fail__DelegateSignature"));
    struct Params_Fail__DelegateSignature {
    }; // Size: 0x0
    Params_Fail__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool ABP_Sphinx_Puzzle_B_Part_C::DisallowArrestoMomentum() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.DisallowArrestoMomentum"));
    struct Params_DisallowArrestoMomentum {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowArrestoMomentum params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Sphinx_Puzzle_B_Part_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Build(TArray<FName>& K2Node_MakeArray_Array, FName Temp_name_Variable, bool CallFunc_ConstructTorch_ReturnValue, FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue, FName Temp_name_Variable_2, E_Size::Type Temp_byte_Variable, ABP_Torch_C* K2Node_DynamicCast_AsBP_Torch, bool K2Node_DynamicCast_bSuccess, FName K2Node_Select_Default, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_NegateVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Build"));
    struct Params_Build {
        TArray<FName> K2Node_MakeArray_Array; // 0x0
        FName Temp_name_Variable; // 0x10
        bool CallFunc_ConstructTorch_ReturnValue; // 0x18
        char pad_19[0x3];
        FName Temp_name_Variable_1; // 0x1c
        bool CallFunc_IsValid_ReturnValue; // 0x24
        char pad_25[0x3];
        FName Temp_name_Variable_2; // 0x28
        E_Size::Type Temp_byte_Variable; // 0x30
        char pad_31[0x7];
        ABP_Torch_C* K2Node_DynamicCast_AsBP_Torch; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        char pad_41[0x3];
        FName K2Node_Select_Default; // 0x44
        char pad_4c[0x4];
        FTransform CallFunc_GetSocketTransform_ReturnValue; // 0x50
        FVector CallFunc_BreakTransform_Location; // 0x80
        FRotator CallFunc_BreakTransform_Rotation; // 0x8c
        FVector CallFunc_BreakTransform_Scale; // 0x98
        FVector CallFunc_NegateVector_ReturnValue; // 0xa4
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0xb0
    }; // Size: 0x138
    Params_Build params{};
    params.K2Node_MakeArray_Array = (TArray<FName>)K2Node_MakeArray_Array;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.CallFunc_ConstructTorch_ReturnValue = (bool)CallFunc_ConstructTorch_ReturnValue;
    params.Temp_name_Variable_1 = (FName)Temp_name_Variable_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_name_Variable_2 = (FName)Temp_name_Variable_2;
    params.Temp_byte_Variable = (E_Size::Type)Temp_byte_Variable;
    params.K2Node_DynamicCast_AsBP_Torch = (ABP_Torch_C*)K2Node_DynamicCast_AsBP_Torch;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Select_Default = (FName)K2Node_Select_Default;
    params.CallFunc_GetSocketTransform_ReturnValue = (FTransform)CallFunc_GetSocketTransform_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_NegateVector_ReturnValue = (FVector)CallFunc_NegateVector_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void ABP_Sphinx_Puzzle_B_Part_C::Move() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Move"));
    struct Params_Move {
    }; // Size: 0x0
    Params_Move params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Success() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Success"));
    struct Params_Success {
    }; // Size: 0x0
    Params_Success params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Clear() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Clear"));
    struct Params_Clear {
    }; // Size: 0x0
    Params_Clear params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::BndEvt__Torch_K2Node_ComponentBoundEvent_0_OnLit__DelegateSignature(ABP_Torch_C* Torch) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.BndEvt__Torch_K2Node_ComponentBoundEvent_0_OnLit__DelegateSignature"));
    struct Params_BndEvt__Torch_K2Node_ComponentBoundEvent_0_OnLit__DelegateSignature {
        ABP_Torch_C* Torch; // 0x0
    }; // Size: 0x8
    Params_BndEvt__Torch_K2Node_ComponentBoundEvent_0_OnLit__DelegateSignature params{};
    params.Torch = (ABP_Torch_C*)Torch;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::ExecuteUbergraph_BP_Sphinx_Puzzle_B_Part(int32_t EntryPoint, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, ABP_Torch_C* K2Node_ComponentBoundEvent_Torch_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_3, float CallFunc_VSize_ReturnValue_1, float CallFunc_VSize_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_VLerp_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, ABP_Torch_C* K2Node_ComponentBoundEvent_Torch, AActor* K2Node_Event_Instigator_1, UArrestoMomentumComponent* K2Node_Event_ArrestoMomentumComponent_1, float K2Node_Event_TimeDilation, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, AActor* K2Node_Event_Instigator, UArrestoMomentumComponent* K2Node_Event_ArrestoMomentumComponent, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2, bool K2Node_ComponentBoundEvent_bStart, UArrestoMomentumComponent* K2Node_ComponentBoundEvent_ArrestoComp, float K2Node_ComponentBoundEvent_TimeDilation, float CallFunc_FMin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue) {}
void ABP_Sphinx_Puzzle_B_Part_C::BndEvt__Torch_K2Node_ComponentBoundEvent_2_OnExtinguished__DelegateSignature(ABP_Torch_C* Torch) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.BndEvt__Torch_K2Node_ComponentBoundEvent_2_OnExtinguished__DelegateSignature"));
    struct Params_BndEvt__Torch_K2Node_ComponentBoundEvent_2_OnExtinguished__DelegateSignature {
        ABP_Torch_C* Torch; // 0x0
    }; // Size: 0x8
    Params_BndEvt__Torch_K2Node_ComponentBoundEvent_2_OnExtinguished__DelegateSignature params{};
    params.Torch = (ABP_Torch_C*)Torch;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.OnArrestoMomentumBegin"));
    struct Params_OnArrestoMomentumBegin {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_OnArrestoMomentumBegin params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.OnArrestoMomentumEnd"));
    struct Params_OnArrestoMomentumEnd {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
    }; // Size: 0x10
    Params_OnArrestoMomentumEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::BndEvt__Torch_K2Node_ComponentBoundEvent_1_ArrestoStart__DelegateSignature(bool bStart, UArrestoMomentumComponent* ArrestoComp, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.BndEvt__Torch_K2Node_ComponentBoundEvent_1_ArrestoStart__DelegateSignature"));
    struct Params_BndEvt__Torch_K2Node_ComponentBoundEvent_1_ArrestoStart__DelegateSignature {
        bool bStart; // 0x0
        char pad_1[0x7];
        UArrestoMomentumComponent* ArrestoComp; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_BndEvt__Torch_K2Node_ComponentBoundEvent_1_ArrestoStart__DelegateSignature params{};
    params.bStart = (bool)bStart;
    params.ArrestoComp = (UArrestoMomentumComponent*)ArrestoComp;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::LoadSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.LoadSolution"));
    struct Params_LoadSolution {
    }; // Size: 0x0
    Params_LoadSolution params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Restart__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Restart__DelegateSignature"));
    struct Params_Restart__DelegateSignature {
    }; // Size: 0x0
    Params_Restart__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Drop__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Drop__DelegateSignature"));
    struct Params_Drop__DelegateSignature {
    }; // Size: 0x0
    Params_Drop__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Part_C::Lit__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Lit__DelegateSignature"));
    struct Params_Lit__DelegateSignature {
    }; // Size: 0x0
    Params_Lit__DelegateSignature params{};
    ProcessEvent(func, &params);
}
