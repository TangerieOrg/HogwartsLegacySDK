#include "UAnimInstance.hpp"
#include "UControlRigLayerInstance.hpp"
UControlRigLayerInstance* UControlRigLayerInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigLayerInstance");
    return (UControlRigLayerInstance*)res;
}
