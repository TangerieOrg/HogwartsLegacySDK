#include "UBroomRiderActionBase.hpp"
#include "UBroomRiderAction_WaitForHermesMessage.hpp"
UBroomRiderAction_WaitForHermesMessage* UBroomRiderAction_WaitForHermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderAction_WaitForHermesMessage");
    return (UBroomRiderAction_WaitForHermesMessage*)res;
}
