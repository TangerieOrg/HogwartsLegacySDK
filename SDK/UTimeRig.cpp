#include "ETimeRigInitializingBehavior.hpp"
#include "UTimeRig.hpp"
#include "UTimeRigElement.hpp"
#include "UTimeRigInterval.hpp"
#include "UTimeRig_StoryGraph.hpp"
UTimeRig* UTimeRig::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRig");
    return (UTimeRig*)res;
}
