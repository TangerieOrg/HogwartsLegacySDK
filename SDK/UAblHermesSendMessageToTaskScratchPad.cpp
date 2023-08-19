#include "FHermesSendMessageToTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblHermesSendMessageToTaskScratchPad.hpp"
UAblHermesSendMessageToTaskScratchPad* UAblHermesSendMessageToTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblHermesSendMessageToTaskScratchPad");
    return (UAblHermesSendMessageToTaskScratchPad*)res;
}
