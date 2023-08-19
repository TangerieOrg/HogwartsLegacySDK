#include "ABP_StationBed_Apparate_C.hpp"
#include "ABP_StationBed_C.hpp"
ABP_StationBed_Apparate_C* ABP_StationBed_Apparate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Bed/BP_StationBed_Apparate.BP_StationBed_Apparate_C");
    return (ABP_StationBed_Apparate_C*)res;
}
