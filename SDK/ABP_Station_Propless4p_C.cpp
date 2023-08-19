#include "ABP_Station_C.hpp"
#include "ABP_Station_Propless4p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Station_Propless4p_C::ExecuteUbergraph_BP_Station_Propless4p(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/BP_Station_Propless4p.BP_Station_Propless4p_C.ExecuteUbergraph_BP_Station_Propless4p"));
    struct Params_ExecuteUbergraph_BP_Station_Propless4p {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Station_Propless4p params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
ABP_Station_Propless4p_C* ABP_Station_Propless4p_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/BP_Station_Propless4p.BP_Station_Propless4p_C");
    return (ABP_Station_Propless4p_C*)res;
}
void ABP_Station_Propless4p_C::UserConstructionScript(FTransform Temp_struct_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue) {}
void ABP_Station_Propless4p_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/BP_Station_Propless4p.BP_Station_Propless4p_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
