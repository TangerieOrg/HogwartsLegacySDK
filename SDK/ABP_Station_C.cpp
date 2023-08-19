#include "ABP_Station_C.hpp"
#include "AStation.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
void ABP_Station_C::Create___Attach_Skel_Mesh_Component() {}
ABP_Station_C* ABP_Station_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/BP_Station.BP_Station_C");
    return (ABP_Station_C*)res;
}
