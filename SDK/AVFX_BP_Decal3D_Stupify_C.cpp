#include "AActor.hpp"
#include "AVFX_BP_Decal3D_Stupify_C.hpp"
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
void AVFX_BP_Decal3D_Stupify_C::Fade_Emissive() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Fade Emissive"));
    struct Params_Fade_Emissive {
    }; // Size: 0x0
    Params_Fade_Emissive params{};
    ProcessEvent(func, &params);
}
AVFX_BP_Decal3D_Stupify_C* AVFX_BP_Decal3D_Stupify_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C");
    return (AVFX_BP_Decal3D_Stupify_C*)res;
}
void AVFX_BP_Decal3D_Stupify_C::Timeline_2__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_2__UpdateFunc"));
    struct Params_Timeline_2__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_2__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Stupify_C::UserConstructionScript0(float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        float CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x4
        FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue; // 0x10
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_UserConstructionScript params{};
    params.CallFunc_RandomFloatInRangeFromStream_ReturnValue = (float)CallFunc_RandomFloatInRangeFromStream_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_Conv_VectorToLinearColor_ReturnValue = (FLinearColor)CallFunc_Conv_VectorToLinearColor_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Stupify_C::Timeline_2__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_2__FinishedFunc"));
    struct Params_Timeline_2__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_2__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Stupify_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Stupify_C::Fade_Decal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Fade Decal"));
    struct Params_Fade_Decal {
    }; // Size: 0x0
    Params_Fade_Decal params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Stupify_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Stupify_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Decal3D_Stupify_C::ExecuteUbergraph_VFX_BP_Decal3D_Stupify(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Stupify/VFX_BP_Decal3D_Stupify.VFX_BP_Decal3D_Stupify_C.ExecuteUbergraph_VFX_BP_Decal3D_Stupify"));
    struct Params_ExecuteUbergraph_VFX_BP_Decal3D_Stupify {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_VFX_BP_Decal3D_Stupify params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
