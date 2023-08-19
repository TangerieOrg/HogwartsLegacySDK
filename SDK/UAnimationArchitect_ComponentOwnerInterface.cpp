#include "UAnimationArchitect_ComponentOwnerInterface.hpp"
#include "UInterface.hpp"
UAnimationArchitect_ComponentOwnerInterface* UAnimationArchitect_ComponentOwnerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitect_ComponentOwnerInterface");
    return (UAnimationArchitect_ComponentOwnerInterface*)res;
}
