#include "UBroomRiderActionBase.hpp"
#include "UBroomRiderAction_Delay.hpp"
UBroomRiderAction_Delay* UBroomRiderAction_Delay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderAction_Delay");
    return (UBroomRiderAction_Delay*)res;
}
