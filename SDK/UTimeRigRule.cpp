#include "UTimeRigElement.hpp"
#include "UTimeRigInterval.hpp"
#include "UTimeRigRule.hpp"
UTimeRigRule* UTimeRigRule::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigRule");
    return (UTimeRigRule*)res;
}
