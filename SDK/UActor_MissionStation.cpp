#include "UActorProvider.hpp"
#include "UActor_MissionStation.hpp"
UActor_MissionStation* UActor_MissionStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_MissionStation");
    return (UActor_MissionStation*)res;
}
