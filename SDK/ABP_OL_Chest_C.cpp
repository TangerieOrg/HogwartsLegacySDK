#include "AActor.hpp"
#include "ABP_OL_Chest_C.hpp"
#include "E_OL_ChestCategory\Type.hpp"
#include "E_OL_ChestCoverType\Type.hpp"
#include "E_OL_ChestType\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_OL_Chest_C* ABP_OL_Chest_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_OL_Chest.BP_OL_Chest_C");
    return (ABP_OL_Chest_C*)res;
}
void ABP_OL_Chest_C::UserConstructionScript0(FTransform Temp_struct_Variable, FTransform Temp_struct_Variable_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue_1, FTransform Temp_struct_Variable_2, FTransform Temp_struct_Variable_3, UChildActorComponent* CallFunc_AddComponent_ReturnValue_2, UChildActorComponent* CallFunc_AddComponent_ReturnValue_3, FTransform Temp_struct_Variable_4, FTransform Temp_struct_Variable_5, UChildActorComponent* CallFunc_AddComponent_ReturnValue_4, UChildActorComponent* CallFunc_AddComponent_ReturnValue_5, FTransform Temp_struct_Variable_6, FTransform Temp_struct_Variable_7, UChildActorComponent* CallFunc_AddComponent_ReturnValue_6, UChildActorComponent* CallFunc_AddComponent_ReturnValue_7, FTransform Temp_struct_Variable_8, FTransform Temp_struct_Variable_9, UChildActorComponent* CallFunc_AddComponent_ReturnValue_8, UChildActorComponent* CallFunc_AddComponent_ReturnValue_9, FTransform Temp_struct_Variable_10, FTransform Temp_struct_Variable_11, UChildActorComponent* CallFunc_AddComponent_ReturnValue_10, UChildActorComponent* CallFunc_AddComponent_ReturnValue_11, FTransform Temp_struct_Variable_12, FTransform Temp_struct_Variable_13, UChildActorComponent* CallFunc_AddComponent_ReturnValue_12, UChildActorComponent* CallFunc_AddComponent_ReturnValue_13, FTransform Temp_struct_Variable_14, UChildActorComponent* CallFunc_AddComponent_ReturnValue_14, FTransform Temp_struct_Variable_15, FTransform Temp_struct_Variable_16, UChildActorComponent* CallFunc_AddComponent_ReturnValue_15, UChildActorComponent* CallFunc_AddComponent_ReturnValue_16, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_10, bool CallFunc_EqualEqual_IntInt_ReturnValue_11, bool CallFunc_EqualEqual_IntInt_ReturnValue_12, bool CallFunc_EqualEqual_IntInt_ReturnValue_13, bool CallFunc_EqualEqual_IntInt_ReturnValue_14, bool K2Node_SwitchEnum_CmpSuccess) {}
void ABP_OL_Chest_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_Chest.BP_OL_Chest_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_OL_Chest_C::ExecuteUbergraph_BP_OL_Chest(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_Chest.BP_OL_Chest_C.ExecuteUbergraph_BP_OL_Chest"));
    struct Params_ExecuteUbergraph_BP_OL_Chest {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_OL_Chest params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
