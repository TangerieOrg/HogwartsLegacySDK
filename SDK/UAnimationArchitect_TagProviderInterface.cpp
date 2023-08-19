#include "UAnimationArchitect_TagProviderInterface.hpp"
#include "UInterface.hpp"
UAnimationArchitect_TagProviderInterface* UAnimationArchitect_TagProviderInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitect_TagProviderInterface");
    return (UAnimationArchitect_TagProviderInterface*)res;
}
