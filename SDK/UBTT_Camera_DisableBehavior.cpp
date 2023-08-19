#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_DisableBehavior.hpp"
#include "UClass.hpp"
UBTT_Camera_DisableBehavior* UBTT_Camera_DisableBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_DisableBehavior");
    return (UBTT_Camera_DisableBehavior*)res;
}
