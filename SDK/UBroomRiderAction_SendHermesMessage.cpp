#include "UBroomRiderActionBase.hpp"
#include "UBroomRiderAction_SendHermesMessage.hpp"
UBroomRiderAction_SendHermesMessage* UBroomRiderAction_SendHermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderAction_SendHermesMessage");
    return (UBroomRiderAction_SendHermesMessage*)res;
}
