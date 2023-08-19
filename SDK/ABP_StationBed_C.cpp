#include "ABP_StationBed_C.hpp"
#include "ABP_Station_C.hpp"
#include "UStationArchitectComponent.hpp"
ABP_StationBed_C* ABP_StationBed_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Bed/BP_StationBed.BP_StationBed_C");
    return (ABP_StationBed_C*)res;
}
