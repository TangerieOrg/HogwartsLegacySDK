#include "UABL_CaptureSuccess_C.hpp"
#include "UAblAbility.hpp"
UABL_CaptureSuccess_C* UABL_CaptureSuccess_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/UseInventoryItem/CaptureDevice/ABL_CaptureSuccess.ABL_CaptureSuccess_C");
    return (UABL_CaptureSuccess_C*)res;
}
