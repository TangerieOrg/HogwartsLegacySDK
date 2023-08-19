#include "UAblAbilityTaskScratchPad.hpp"
#include "UablTimeDilationTaskScratchPad.hpp"
UablTimeDilationTaskScratchPad* UablTimeDilationTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.ablTimeDilationTaskScratchPad");
    return (UablTimeDilationTaskScratchPad*)res;
}
