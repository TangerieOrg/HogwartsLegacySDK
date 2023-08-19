#include "UBTTaskNode.hpp"
#include "UBTTask_WaitForHermesMessage.hpp"
UBTTask_WaitForHermesMessage* UBTTask_WaitForHermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_WaitForHermesMessage");
    return (UBTTask_WaitForHermesMessage*)res;
}
