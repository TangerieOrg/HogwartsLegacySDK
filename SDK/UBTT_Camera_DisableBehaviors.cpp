#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_DisableBehaviors.hpp"
#include "UClass.hpp"
UBTT_Camera_DisableBehaviors* UBTT_Camera_DisableBehaviors::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_DisableBehaviors");
    return (UBTT_Camera_DisableBehaviors*)res;
}
