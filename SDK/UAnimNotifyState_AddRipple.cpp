#include "FRuntimeFloatCurve.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_AddRipple.hpp"
UAnimNotifyState_AddRipple* UAnimNotifyState_AddRipple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotifyState_AddRipple");
    return (UAnimNotifyState_AddRipple*)res;
}
