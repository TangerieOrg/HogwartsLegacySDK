#include "UAAFilter_AnimationLength.hpp"
#include "UBaseArchitectFilter.hpp"
UAAFilter_AnimationLength* UAAFilter_AnimationLength::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AAFilter_AnimationLength");
    return (UAAFilter_AnimationLength*)res;
}
