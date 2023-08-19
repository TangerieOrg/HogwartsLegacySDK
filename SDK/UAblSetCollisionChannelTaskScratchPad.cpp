#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetCollisionChannelTaskScratchPad.hpp"
UAblSetCollisionChannelTaskScratchPad* UAblSetCollisionChannelTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetCollisionChannelTaskScratchPad");
    return (UAblSetCollisionChannelTaskScratchPad*)res;
}
