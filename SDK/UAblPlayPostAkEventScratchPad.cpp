#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayPostAkEventScratchPad.hpp"
UAblPlayPostAkEventScratchPad* UAblPlayPostAkEventScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayPostAkEventScratchPad");
    return (UAblPlayPostAkEventScratchPad*)res;
}
