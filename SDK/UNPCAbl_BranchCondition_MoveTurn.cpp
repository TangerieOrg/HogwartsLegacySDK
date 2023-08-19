#include "UAblBranchCondition.hpp"
#include "UNPCAbl_BranchCondition_MoveTurn.hpp"
UNPCAbl_BranchCondition_MoveTurn* UNPCAbl_BranchCondition_MoveTurn::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPCAbl_BranchCondition_MoveTurn");
    return (UNPCAbl_BranchCondition_MoveTurn*)res;
}
