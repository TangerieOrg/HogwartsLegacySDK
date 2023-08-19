#include "UAdditiveControlRig.hpp"
#include "UControlRig.hpp"
UAdditiveControlRig* UAdditiveControlRig::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.AdditiveControlRig");
    return (UAdditiveControlRig*)res;
}
