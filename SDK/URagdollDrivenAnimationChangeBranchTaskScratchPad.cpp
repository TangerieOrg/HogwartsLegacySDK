#include "UAblBranchTaskScratchPad.hpp"
#include "URagdollDrivenAnimationChangeBranchTaskScratchPad.hpp"
URagdollDrivenAnimationChangeBranchTaskScratchPad* URagdollDrivenAnimationChangeBranchTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RagdollDrivenAnimationChangeBranchTaskScratchPad");
    return (URagdollDrivenAnimationChangeBranchTaskScratchPad*)res;
}
