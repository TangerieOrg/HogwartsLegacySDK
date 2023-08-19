#include "FRigPose.hpp"
#include "UControlRigNumericalValidationPass.hpp"
#include "UControlRigValidationPass.hpp"
UControlRigNumericalValidationPass* UControlRigNumericalValidationPass::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigNumericalValidationPass");
    return (UControlRigNumericalValidationPass*)res;
}
