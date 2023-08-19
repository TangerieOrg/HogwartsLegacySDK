#include "ECreatureStance.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchCreatureStance.hpp"
UAblBranchCreatureStance* UAblBranchCreatureStance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchCreatureStance");
    return (UAblBranchCreatureStance*)res;
}
