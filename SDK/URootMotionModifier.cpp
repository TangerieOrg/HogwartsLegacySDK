#include "AActor.hpp"
#include "ERootMotionModifierOrder.hpp"
#include "UObject.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifierProperties.hpp"
URootMotionModifier* URootMotionModifier::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.RootMotionModifier");
    return (URootMotionModifier*)res;
}
