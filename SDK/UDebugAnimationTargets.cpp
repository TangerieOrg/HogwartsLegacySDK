#include "AActor.hpp"
#include "UDebugAnimationTargets.hpp"
#include "UDebugWindow.hpp"
UDebugAnimationTargets* UDebugAnimationTargets::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.DebugAnimationTargets");
    return (UDebugAnimationTargets*)res;
}
