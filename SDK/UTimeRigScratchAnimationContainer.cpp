#include "UInterface.hpp"
#include "UTimeRigScratchAnimationContainer.hpp"
UTimeRigScratchAnimationContainer* UTimeRigScratchAnimationContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigScratchAnimationContainer");
    return (UTimeRigScratchAnimationContainer*)res;
}
