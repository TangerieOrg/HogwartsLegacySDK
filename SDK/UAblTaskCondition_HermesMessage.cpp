#include "UAblTaskCondition.hpp"
#include "UAblTaskCondition_HermesMessage.hpp"
UAblTaskCondition_HermesMessage* UAblTaskCondition_HermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskCondition_HermesMessage");
    return (UAblTaskCondition_HermesMessage*)res;
}
