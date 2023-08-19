#include "UControlRigValidationPass.hpp"
#include "UControlRigValidator.hpp"
#include "UObject.hpp"
UControlRigValidator* UControlRigValidator::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigValidator");
    return (UControlRigValidator*)res;
}
