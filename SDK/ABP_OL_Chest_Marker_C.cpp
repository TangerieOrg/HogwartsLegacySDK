#include "ABP_Marker_Base_C.hpp"
#include "ABP_OL_Chest_Marker_C.hpp"
#include "E_OL_ChestType\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_OL_Chest_Marker_C* ABP_OL_Chest_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_OL_Chest_Marker.BP_OL_Chest_Marker_C");
    return (ABP_OL_Chest_Marker_C*)res;
}
void ABP_OL_Chest_Marker_C::UserConstructionScript() {}
void ABP_OL_Chest_Marker_C::ExecuteUbergraph_BP_OL_Chest_Marker(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_Chest_Marker.BP_OL_Chest_Marker_C.ExecuteUbergraph_BP_OL_Chest_Marker"));
    struct Params_ExecuteUbergraph_BP_OL_Chest_Marker {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_OL_Chest_Marker params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void ABP_OL_Chest_Marker_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_Chest_Marker.BP_OL_Chest_Marker_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
