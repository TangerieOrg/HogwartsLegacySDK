#include "UAblBranchTask.hpp"
#include "UAblNpcCollisionBranchTask.hpp"
UAblNpcCollisionBranchTask* UAblNpcCollisionBranchTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcCollisionBranchTask");
    return (UAblNpcCollisionBranchTask*)res;
}
