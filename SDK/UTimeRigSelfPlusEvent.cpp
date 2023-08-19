#include "UFloatProvider.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigSelfPlusEvent.hpp"
UTimeRigSelfPlusEvent* UTimeRigSelfPlusEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigSelfPlusEvent");
    return (UTimeRigSelfPlusEvent*)res;
}
