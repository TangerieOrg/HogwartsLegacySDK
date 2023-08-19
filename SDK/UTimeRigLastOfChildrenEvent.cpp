#include "UTimeRigEvent.hpp"
#include "UTimeRigLastOfChildrenEvent.hpp"
UTimeRigLastOfChildrenEvent* UTimeRigLastOfChildrenEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigLastOfChildrenEvent");
    return (UTimeRigLastOfChildrenEvent*)res;
}
