#include "EBarrelRollDirection.hpp"
#include "UBroomRiderActionBase.hpp"
#include "UBroomRiderAction_BarrelRoll.hpp"
UBroomRiderAction_BarrelRoll* UBroomRiderAction_BarrelRoll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderAction_BarrelRoll");
    return (UBroomRiderAction_BarrelRoll*)res;
}
