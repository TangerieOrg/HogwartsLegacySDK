#include "EBroomEnemyState\Type.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UBroomRiderActionBase.hpp"
#include "UBroomRiderAction_TravelToPoint.hpp"
#include "UFlyingBroomPhysics_Spline.hpp"
#include "UFunction.hpp"
void UBroomRiderAction_TravelToPoint::CheckPlayerDistanceToNPC() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomRiderAction_TravelToPoint.CheckPlayerDistanceToNPC"));
    struct Params_CheckPlayerDistanceToNPC {
    }; // Size: 0x0
    Params_CheckPlayerDistanceToNPC params{};
    ProcessEvent(func, &params);
}
UBroomRiderAction_TravelToPoint* UBroomRiderAction_TravelToPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderAction_TravelToPoint");
    return (UBroomRiderAction_TravelToPoint*)res;
}
