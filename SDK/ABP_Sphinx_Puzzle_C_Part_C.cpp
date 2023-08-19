#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_C_Part_C.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "E_Platform_Sizes\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSingleAnimationPlayData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UBP_ObjectBuoyancyComponent_C.hpp"
#include "UFunction.hpp"
#include "ULocalStencilBoundsHintComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkinFXComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Sphinx_Puzzle_C_Part_C::Success() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Success"));
    struct Params_Success {
    }; // Size: 0x0
    Params_Success params{};
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_C_Part_C* ABP_Sphinx_Puzzle_C_Part_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C");
    return (ABP_Sphinx_Puzzle_C_Part_C*)res;
}
void ABP_Sphinx_Puzzle_C_Part_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::Activate(bool ACTIVE, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, UAkAudioEvent* Temp_object_Variable, float K2Node_Select_Default, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAkAudioEvent* Temp_object_Variable_1, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Variable_1, UAkAudioEvent* K2Node_Select_Default_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Activate"));
    struct Params_Activate {
        bool ACTIVE; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x2];
        float Temp_float_Variable; // 0x4
        float Temp_float_Variable_1; // 0x8
        char pad_c[0x4];
        UAkAudioEvent* Temp_object_Variable; // 0x10
        float K2Node_Select_Default; // 0x18
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x1c
        UAkAudioEvent* Temp_object_Variable_1; // 0x28
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_BoolBool_ReturnValue; // 0x3c
        bool Temp_bool_Variable_1; // 0x3d
        char pad_3e[0x2];
        UAkAudioEvent* K2Node_Select_Default_1; // 0x40
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue; // 0x48
    }; // Size: 0x50
    Params_Activate params{};
    params.ACTIVE = (bool)ACTIVE;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.Temp_object_Variable = (UAkAudioEvent*)Temp_object_Variable;
    params.K2Node_Select_Default = (float)K2Node_Select_Default;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.Temp_object_Variable_1 = (UAkAudioEvent*)Temp_object_Variable_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_EqualEqual_BoolBool_ReturnValue = (bool)CallFunc_EqualEqual_BoolBool_ReturnValue;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default_1 = (UAkAudioEvent*)K2Node_Select_Default_1;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::Build(FTransform StencilTransform_Lg, FTransform StencilTransform_Sm, float ExtentModifier, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, FTransform Temp_struct_Variable, UBP_ObjectBuoyancyComponent_C* CallFunc_AddComponent_ReturnValue, FSingleAnimationPlayData K2Node_MakeStruct_SingleAnimationPlayData, FSingleAnimationPlayData K2Node_MakeStruct_SingleAnimationPlayData_1, bool K2Node_SwitchEnum_CmpSuccess, int32_t CallFunc_Conv_ByteToInt_ReturnValue) {}
void ABP_Sphinx_Puzzle_C_Part_C::BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Sphinx_Puzzle_C_Part_C::BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::LoadSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.LoadSolution"));
    struct Params_LoadSolution {
    }; // Size: 0x0
    Params_LoadSolution params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::ExecuteUbergraph_BP_Sphinx_Puzzle_C_Part(int32_t EntryPoint, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, FName CallFunc_SkinFXName_name, FName CallFunc_SkinFXName_name_1, USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.ExecuteUbergraph_BP_Sphinx_Puzzle_C_Part"));
    struct Params_ExecuteUbergraph_BP_Sphinx_Puzzle_C_Part {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        char pad_11[0x7];
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1; // 0x18
        AActor* K2Node_ComponentBoundEvent_OtherActor_1; // 0x20
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1; // 0x28
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1; // 0x30
        bool K2Node_ComponentBoundEvent_bFromSweep; // 0x34
        char pad_35[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult; // 0x38
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent; // 0xc0
        AActor* K2Node_ComponentBoundEvent_OtherActor; // 0xc8
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp; // 0xd0
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex; // 0xd8
        char pad_dc[0x4];
        AActor* CallFunc_GetAttachParentActor_ReturnValue; // 0xe0
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0xe8
        char pad_e9[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0xec
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1; // 0xf8
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x100
        char pad_10c[0x4];
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue; // 0x110
        FName CallFunc_SkinFXName_name; // 0x118
        FName CallFunc_SkinFXName_name_1; // 0x120
        USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent; // 0x128
    }; // Size: 0x130
    Params_ExecuteUbergraph_BP_Sphinx_Puzzle_C_Part params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_ComponentBoundEvent_OverlappedComponent_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent_1;
    params.K2Node_ComponentBoundEvent_OtherActor_1 = (AActor*)K2Node_ComponentBoundEvent_OtherActor_1;
    params.K2Node_ComponentBoundEvent_OtherComp_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp_1;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex_1;
    params.K2Node_ComponentBoundEvent_bFromSweep = (bool)K2Node_ComponentBoundEvent_bFromSweep;
    params.K2Node_ComponentBoundEvent_SweepResult = (FHitResult)K2Node_ComponentBoundEvent_SweepResult;
    params.K2Node_ComponentBoundEvent_OverlappedComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent;
    params.K2Node_ComponentBoundEvent_OtherActor = (AActor*)K2Node_ComponentBoundEvent_OtherActor;
    params.K2Node_ComponentBoundEvent_OtherComp = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex;
    params.CallFunc_GetAttachParentActor_ReturnValue = (AActor*)CallFunc_GetAttachParentActor_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue_1 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue;
    params.CallFunc_SkinFXName_name = (FName)CallFunc_SkinFXName_name;
    params.CallFunc_SkinFXName_name_1 = (FName)CallFunc_SkinFXName_name_1;
    params.CallFunc_ActorStartSkinFX_skinFXComponent = (USkinFXComponent*)CallFunc_ActorStartSkinFX_skinFXComponent;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::Flying__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Flying__DelegateSignature"));
    struct Params_Flying__DelegateSignature {
    }; // Size: 0x0
    Params_Flying__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::SetPlayer__DelegateSignature(AActor* Player) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.SetPlayer__DelegateSignature"));
    struct Params_SetPlayer__DelegateSignature {
        AActor* Player; // 0x0
    }; // Size: 0x8
    Params_SetPlayer__DelegateSignature params{};
    params.Player = (AActor*)Player;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::OnPlatform__DelegateSignature(bool bEntered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.OnPlatform__DelegateSignature"));
    struct Params_OnPlatform__DelegateSignature {
        bool bEntered; // 0x0
    }; // Size: 0x1
    Params_OnPlatform__DelegateSignature params{};
    params.bEntered = (bool)bEntered;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Part_C::Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Activated__DelegateSignature"));
    struct Params_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
