#include "ABP_Breakable_Fragile_C.hpp"
#include "APersistentBreakable.hpp"
#include "EInteractiveState.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UInteractiveObjectComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Breakable_Fragile_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Breakables/BP_Breakable_Fragile.BP_Breakable_Fragile_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Breakable_Fragile_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, UStaticMesh* CallFunc_GetRepairBaseMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Breakables/BP_Breakable_Fragile.BP_Breakable_Fragile_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        char pad_1[0x7];
        UStaticMesh* CallFunc_GetRepairBaseMesh_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue_1; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_UserConstructionScript params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetRepairBaseMesh_ReturnValue = (UStaticMesh*)CallFunc_GetRepairBaseMesh_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
ABP_Breakable_Fragile_C* ABP_Breakable_Fragile_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Breakables/BP_Breakable_Fragile.BP_Breakable_Fragile_C");
    return (ABP_Breakable_Fragile_C*)res;
}
void ABP_Breakable_Fragile_C::ExecuteUbergraph_BP_Breakable_Fragile(int32_t EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Kill_ReturnValue, EInteractiveState CallFunc_GetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Breakables/BP_Breakable_Fragile.BP_Breakable_Fragile_C.ExecuteUbergraph_BP_Breakable_Fragile"));
    struct Params_ExecuteUbergraph_BP_Breakable_Fragile {
        int32_t EntryPoint; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x4
        bool CallFunc_Kill_ReturnValue; // 0x5
        EInteractiveState CallFunc_GetState_ReturnValue; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x7
        bool CallFunc_BooleanAND_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ExecuteUbergraph_BP_Breakable_Fragile params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Kill_ReturnValue = (bool)CallFunc_Kill_ReturnValue;
    params.CallFunc_GetState_ReturnValue = (EInteractiveState)CallFunc_GetState_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
