#include "UAblBranchCondition.hpp"
#include "UAblBranchCreaturePathTeleport.hpp"
UAblBranchCreaturePathTeleport* UAblBranchCreaturePathTeleport::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchCreaturePathTeleport");
    return (UAblBranchCreaturePathTeleport*)res;
}
