#include "UAblBranchTaskScratchPad.hpp"
#include "UablNPC_SplitTaskScratchPad.hpp"
UablNPC_SplitTaskScratchPad* UablNPC_SplitTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_SplitTaskScratchPad");
    return (UablNPC_SplitTaskScratchPad*)res;
}
