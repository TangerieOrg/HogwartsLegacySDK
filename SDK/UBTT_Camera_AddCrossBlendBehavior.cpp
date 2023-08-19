#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_AddCrossBlendBehavior.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UClass.hpp"
UBTT_Camera_AddCrossBlendBehavior* UBTT_Camera_AddCrossBlendBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_AddCrossBlendBehavior");
    return (UBTT_Camera_AddCrossBlendBehavior*)res;
}
