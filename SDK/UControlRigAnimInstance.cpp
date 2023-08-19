#include "UAnimInstance.hpp"
#include "UControlRigAnimInstance.hpp"
UControlRigAnimInstance* UControlRigAnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigAnimInstance");
    return (UControlRigAnimInstance*)res;
}
