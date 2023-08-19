#include "ABP_Sanc_Alcove_02_Parent_C.hpp"
#include "ATransfigurationStructureBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
#include "UOdcObstacleComponent.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "USceneComponent.hpp"
#include "UTransformationFxInfoComponent.hpp"
ABP_Sanc_Alcove_02_Parent_C* ABP_Sanc_Alcove_02_Parent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_Alcove_02_Parent.BP_Sanc_Alcove_02_Parent_C");
    return (ABP_Sanc_Alcove_02_Parent_C*)res;
}
void ABP_Sanc_Alcove_02_Parent_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_Alcove_02_Parent.BP_Sanc_Alcove_02_Parent_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_Alcove_02_Parent_C::ExecuteUbergraph_BP_Sanc_Alcove_02_Parent(int32_t EntryPoint, TArray<UActorComponent*>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_Alcove_02_Parent.BP_Sanc_Alcove_02_Parent_C.ExecuteUbergraph_BP_Sanc_Alcove_02_Parent"));
    struct Params_ExecuteUbergraph_BP_Sanc_Alcove_02_Parent {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        TArray<UActorComponent*> K2Node_MakeArray_Array; // 0x8
    }; // Size: 0x18
    Params_ExecuteUbergraph_BP_Sanc_Alcove_02_Parent params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeArray_Array = (TArray<UActorComponent*>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
