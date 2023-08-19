#include "FCollisionLayerResponseEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetCollisionChannelResponseTaskScratchPad.hpp"
UAblSetCollisionChannelResponseTaskScratchPad* UAblSetCollisionChannelResponseTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetCollisionChannelResponseTaskScratchPad");
    return (UAblSetCollisionChannelResponseTaskScratchPad*)res;
}
