#include "EWandCastType\Type.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UablWandCastContextsTaskScratchPad.hpp"
UablWandCastContextsTaskScratchPad* UablWandCastContextsTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablWandCastContextsTaskScratchPad");
    return (UablWandCastContextsTaskScratchPad*)res;
}
