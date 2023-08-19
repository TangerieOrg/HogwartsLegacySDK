#include "UAblTaskConditionScratchpad.hpp"
#include "UAblTaskConditionScratchpad_HermesMessage.hpp"
UAblTaskConditionScratchpad_HermesMessage* UAblTaskConditionScratchpad_HermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskConditionScratchpad_HermesMessage");
    return (UAblTaskConditionScratchpad_HermesMessage*)res;
}
