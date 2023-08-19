#include "UAblTaskConditionScratchpad.hpp"
#include "UObject.hpp"
UAblTaskConditionScratchpad* UAblTaskConditionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTaskConditionScratchpad");
    return (UAblTaskConditionScratchpad*)res;
}
