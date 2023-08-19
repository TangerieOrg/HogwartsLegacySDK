#include "EMovementMode.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchMovementMode.hpp"
UAblBranchMovementMode* UAblBranchMovementMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchMovementMode");
    return (UAblBranchMovementMode*)res;
}
