#include "UAblAbilityTaskScratchPad.hpp"
#include "UablIKPoseFixupTaskScratchPad.hpp"
UablIKPoseFixupTaskScratchPad* UablIKPoseFixupTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablIKPoseFixupTaskScratchPad");
    return (UablIKPoseFixupTaskScratchPad*)res;
}
