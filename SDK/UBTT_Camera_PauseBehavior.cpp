#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_PauseBehavior.hpp"
#include "UClass.hpp"
UBTT_Camera_PauseBehavior* UBTT_Camera_PauseBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_PauseBehavior");
    return (UBTT_Camera_PauseBehavior*)res;
}
