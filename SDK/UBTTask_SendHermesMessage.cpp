#include "UBTTaskNode.hpp"
#include "UBTTask_SendHermesMessage.hpp"
UBTTask_SendHermesMessage* UBTTask_SendHermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_SendHermesMessage");
    return (UBTTask_SendHermesMessage*)res;
}
