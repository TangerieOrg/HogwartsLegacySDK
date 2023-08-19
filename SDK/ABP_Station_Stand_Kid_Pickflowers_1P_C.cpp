#include "ABP_Station_Propless1p_C.hpp"
#include "ABP_Station_Stand_Kid_Pickflowers_1P_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStationArchitectComponent.hpp"
ABP_Station_Stand_Kid_Pickflowers_1P_C* ABP_Station_Stand_Kid_Pickflowers_1P_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Custom/Kids/BP_Station_Stand_Kid_Pickflowers_1P.BP_Station_Stand_Kid_Pickflowers_1P_C");
    return (ABP_Station_Stand_Kid_Pickflowers_1P_C*)res;
}
void ABP_Station_Stand_Kid_Pickflowers_1P_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/Kids/BP_Station_Stand_Kid_Pickflowers_1P.BP_Station_Stand_Kid_Pickflowers_1P_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Station_Stand_Kid_Pickflowers_1P_C::ExecuteUbergraph_BP_Station_Stand_Kid_Pickflowers_1P(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/Kids/BP_Station_Stand_Kid_Pickflowers_1P.BP_Station_Stand_Kid_Pickflowers_1P_C.ExecuteUbergraph_BP_Station_Stand_Kid_Pickflowers_1P"));
    struct Params_ExecuteUbergraph_BP_Station_Stand_Kid_Pickflowers_1P {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Station_Stand_Kid_Pickflowers_1P params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
