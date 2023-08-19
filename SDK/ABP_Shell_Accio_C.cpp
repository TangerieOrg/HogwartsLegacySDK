#include "AActor.hpp"
#include "ABP_Shell_Accio_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_Shell_Accio_C::UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_Shell_Accio.BP_Shell_Accio_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UserConstructionScript params{};
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    ProcessEvent(func, &params);
}
ABP_Shell_Accio_C* ABP_Shell_Accio_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/BP_Shell_Accio.BP_Shell_Accio_C");
    return (ABP_Shell_Accio_C*)res;
}
void ABP_Shell_Accio_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_Shell_Accio.BP_Shell_Accio_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Shell_Accio_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_Shell_Accio.BP_Shell_Accio_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Shell_Accio_C::ExecuteUbergraph_BP_Shell_Accio(int32_t EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, UStaticMesh* K2Node_CustomEvent_MeshToFreeze, FVector K2Node_CustomEvent_HitLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_Shell_Accio.BP_Shell_Accio_C.ExecuteUbergraph_BP_Shell_Accio"));
    struct Params_ExecuteUbergraph_BP_Shell_Accio {
        int32_t EntryPoint; // 0x0
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x4
        char pad_5[0x3];
        UStaticMesh* K2Node_CustomEvent_MeshToFreeze; // 0x8
        FVector K2Node_CustomEvent_HitLocation; // 0x10
    }; // Size: 0x1c
    Params_ExecuteUbergraph_BP_Shell_Accio params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.K2Node_CustomEvent_MeshToFreeze = (UStaticMesh*)K2Node_CustomEvent_MeshToFreeze;
    params.K2Node_CustomEvent_HitLocation = (FVector)K2Node_CustomEvent_HitLocation;
    ProcessEvent(func, &params);
}
void ABP_Shell_Accio_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_Shell_Accio.BP_Shell_Accio_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Shell_Accio_C::StartShell(UStaticMesh* MeshToFreeze, FVector HitLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_Shell_Accio.BP_Shell_Accio_C.StartShell"));
    struct Params_StartShell {
        UStaticMesh* MeshToFreeze; // 0x0
        FVector HitLocation; // 0x8
    }; // Size: 0x14
    Params_StartShell params{};
    params.MeshToFreeze = (UStaticMesh*)MeshToFreeze;
    params.HitLocation = (FVector)HitLocation;
    ProcessEvent(func, &params);
}
