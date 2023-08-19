#include "UControlRigSequence.hpp"
#include "ULevelSequence.hpp"
UControlRigSequence* UControlRigSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigSequence");
    return (UControlRigSequence*)res;
}
