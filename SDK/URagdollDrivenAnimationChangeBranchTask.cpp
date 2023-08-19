#include "UAblBranchTask.hpp"
#include "URagdollDrivenAnimationChangeBranchTask.hpp"
URagdollDrivenAnimationChangeBranchTask* URagdollDrivenAnimationChangeBranchTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RagdollDrivenAnimationChangeBranchTask");
    return (URagdollDrivenAnimationChangeBranchTask*)res;
}
