#include "ABP_Station_Propless2p_C.hpp"
#include "ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C.hpp"
#include "UStationArchitectComponent.hpp"
ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C* ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Custom/Kids/BP_Station_Stand_Kid_Dock_EdgeSit_2P.BP_Station_Stand_Kid_Dock_EdgeSit_2P_C");
    return (ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C*)res;
}
