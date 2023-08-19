#include "ABP_Station_CustomGardenPlow_1p_C.hpp"
#include "ABP_Station_Propless1p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStationArchitectComponent.hpp"
ABP_Station_CustomGardenPlow_1p_C* ABP_Station_CustomGardenPlow_1p_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Custom/Gardening/BP_Station_CustomGardenPlow_1p.BP_Station_CustomGardenPlow_1p_C");
    return (ABP_Station_CustomGardenPlow_1p_C*)res;
}
void ABP_Station_CustomGardenPlow_1p_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/Gardening/BP_Station_CustomGardenPlow_1p.BP_Station_CustomGardenPlow_1p_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Station_CustomGardenPlow_1p_C::ExecuteUbergraph_BP_Station_CustomGardenPlow_1p(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/Gardening/BP_Station_CustomGardenPlow_1p.BP_Station_CustomGardenPlow_1p_C.ExecuteUbergraph_BP_Station_CustomGardenPlow_1p"));
    struct Params_ExecuteUbergraph_BP_Station_CustomGardenPlow_1p {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Station_CustomGardenPlow_1p params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
