#include "UObject.hpp"
#include "UablExecuteTaskSubScratchPad.hpp"
UablExecuteTaskSubScratchPad* UablExecuteTaskSubScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablExecuteTaskSubScratchPad");
    return (UablExecuteTaskSubScratchPad*)res;
}
