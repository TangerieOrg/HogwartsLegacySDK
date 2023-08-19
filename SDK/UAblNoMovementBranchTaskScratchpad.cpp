#include "UAblBranchTaskScratchPad.hpp"
#include "UAblNoMovementBranchTaskScratchpad.hpp"
UAblNoMovementBranchTaskScratchpad* UAblNoMovementBranchTaskScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNoMovementBranchTaskScratchpad");
    return (UAblNoMovementBranchTaskScratchpad*)res;
}
