#include "AActor.hpp"
#include "AVFX_BP_Decal3D_Blast_Confringo_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UDecalComponent.hpp"
#include "UDecalSphereHelper.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
AVFX_BP_Decal3D_Blast_Confringo_C* AVFX_BP_Decal3D_Blast_Confringo_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/Decal3D/VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C");
    return (AVFX_BP_Decal3D_Blast_Confringo_C*)res;
}
void AVFX_BP_Decal3D_Blast_Confringo_C::UserConstructionScript0(FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FVector CallFunc_GetActorForwardVector_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/Decal3D/VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        float CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0xc
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0x10
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x18
        char pad_24[0x4];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x28
        FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue; // 0x30
    }; // Size: 0x40
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_RandomFloatInRangeFromStream_ReturnValue = (float)CallFunc_RandomFloatInRangeFromStream_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_Conv_VectorToLinearColor_ReturnValue = (FLinearColor)CallFunc_Conv_VectorToLinearColor_ReturnValue;
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Blast_Confringo_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/Decal3D/VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Blast_Confringo_C::Fade_Decal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/Decal3D/VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.Fade Decal"));
    struct Params_Fade_Decal {
    }; // Size: 0x0
    Params_Fade_Decal params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Blast_Confringo_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/Decal3D/VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Blast_Confringo_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/Decal3D/VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Blast_Confringo_C::ExecuteUbergraph_VFX_BP_Decal3D_Blast_Confringo(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/Decal3D/VFX_BP_Decal3D_Blast_Confringo.VFX_BP_Decal3D_Blast_Confringo_C.ExecuteUbergraph_VFX_BP_Decal3D_Blast_Confringo"));
    struct Params_ExecuteUbergraph_VFX_BP_Decal3D_Blast_Confringo {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_VFX_BP_Decal3D_Blast_Confringo params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
