#include "UAblLeavingNavMeshTaskCondition.hpp"
#include "UAblTaskCondition.hpp"
UAblLeavingNavMeshTaskCondition* UAblLeavingNavMeshTaskCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblLeavingNavMeshTaskCondition");
    return (UAblLeavingNavMeshTaskCondition*)res;
}
