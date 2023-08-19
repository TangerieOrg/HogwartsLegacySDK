#include "ABP_Sanc_AmbientPainting_11_C.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UConjurationSnappingWallComponent.hpp"
#include "UConjurationSurfaceShapeComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ABP_Sanc_AmbientPainting_11_C::ObjectTransformationConfirmed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_11.BP_Sanc_AmbientPainting_11_C.ObjectTransformationConfirmed"));
    struct Params_ObjectTransformationConfirmed {
    }; // Size: 0x0
    Params_ObjectTransformationConfirmed params{};
    ProcessEvent(func, &params);
}
ABP_Sanc_AmbientPainting_11_C* ABP_Sanc_AmbientPainting_11_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_11.BP_Sanc_AmbientPainting_11_C");
    return (ABP_Sanc_AmbientPainting_11_C*)res;
}
void ABP_Sanc_AmbientPainting_11_C::ExecuteUbergraph_BP_Sanc_AmbientPainting_11(int32_t EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_11.BP_Sanc_AmbientPainting_11_C.ExecuteUbergraph_BP_Sanc_AmbientPainting_11"));
    struct Params_ExecuteUbergraph_BP_Sanc_AmbientPainting_11 {
        int32_t EntryPoint; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x14
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x20
    }; // Size: 0x24
    Params_ExecuteUbergraph_BP_Sanc_AmbientPainting_11 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_Sanc_AmbientPainting_11_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_11.BP_Sanc_AmbientPainting_11_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_AmbientPainting_11_C::ObjectConjured() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_11.BP_Sanc_AmbientPainting_11_C.ObjectConjured"));
    struct Params_ObjectConjured {
    }; // Size: 0x0
    Params_ObjectConjured params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_AmbientPainting_11_C::ObjectTransformationCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_11.BP_Sanc_AmbientPainting_11_C.ObjectTransformationCancelled"));
    struct Params_ObjectTransformationCancelled {
    }; // Size: 0x0
    Params_ObjectTransformationCancelled params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_AmbientPainting_11_C::ObjectVanished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_11.BP_Sanc_AmbientPainting_11_C.ObjectVanished"));
    struct Params_ObjectVanished {
    }; // Size: 0x0
    Params_ObjectVanished params{};
    ProcessEvent(func, &params);
}
