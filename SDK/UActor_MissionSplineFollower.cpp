#include "UActorProvider.hpp"
#include "UActor_MissionSplineFollower.hpp"
UActor_MissionSplineFollower* UActor_MissionSplineFollower::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_MissionSplineFollower");
    return (UActor_MissionSplineFollower*)res;
}
