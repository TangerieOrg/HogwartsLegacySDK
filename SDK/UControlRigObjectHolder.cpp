#include "UControlRigObjectHolder.hpp"
#include "UObject.hpp"
UControlRigObjectHolder* UControlRigObjectHolder::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigObjectHolder");
    return (UControlRigObjectHolder*)res;
}
