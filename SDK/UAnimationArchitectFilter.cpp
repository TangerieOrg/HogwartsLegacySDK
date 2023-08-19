#include "UAnimationArchitectFilter.hpp"
#include "UObject.hpp"
UAnimationArchitectFilter* UAnimationArchitectFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitectFilter");
    return (UAnimationArchitectFilter*)res;
}
