#include "ABP_Station_Ground_Studying_2P_C.hpp"
#include "ABP_Station_Propless2p_C.hpp"
#include "UStationArchitectComponent.hpp"
ABP_Station_Ground_Studying_2P_C* ABP_Station_Ground_Studying_2P_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Custom/Neighborhood/Social/BP_Station_Ground_Studying_2P.BP_Station_Ground_Studying_2P_C");
    return (ABP_Station_Ground_Studying_2P_C*)res;
}
