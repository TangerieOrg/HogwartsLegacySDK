#include "UAblAbilityTaskScratchPad.hpp"
#include "UablBroomMountKeepAboveGroundScratchPad.hpp"
UablBroomMountKeepAboveGroundScratchPad* UablBroomMountKeepAboveGroundScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBroomMountKeepAboveGroundScratchPad");
    return (UablBroomMountKeepAboveGroundScratchPad*)res;
}
