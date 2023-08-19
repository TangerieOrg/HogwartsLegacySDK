#include "UTimeRigElementState.hpp"
#include "UTimeRigPlaceholderState.hpp"
UTimeRigPlaceholderState* UTimeRigPlaceholderState::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigPlaceholderState");
    return (UTimeRigPlaceholderState*)res;
}
