#include "UAnimSequencerInstance.hpp"
#include "UControlRigSequencerAnimInstance.hpp"
UControlRigSequencerAnimInstance* UControlRigSequencerAnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigSequencerAnimInstance");
    return (UControlRigSequencerAnimInstance*)res;
}
