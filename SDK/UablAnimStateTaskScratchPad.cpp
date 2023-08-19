#include "UAblAbilityTaskScratchPad.hpp"
#include "UablAnimStateTaskScratchPad.hpp"
UablAnimStateTaskScratchPad* UablAnimStateTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAnimStateTaskScratchPad");
    return (UablAnimStateTaskScratchPad*)res;
}
