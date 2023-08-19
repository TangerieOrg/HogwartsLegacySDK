#include "UControlRigValidationPass.hpp"
#include "UObject.hpp"
UControlRigValidationPass* UControlRigValidationPass::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigValidationPass");
    return (UControlRigValidationPass*)res;
}
