#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_ReplaceBehavior.hpp"
#include "UClass.hpp"
UBTT_Camera_ReplaceBehavior* UBTT_Camera_ReplaceBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_ReplaceBehavior");
    return (UBTT_Camera_ReplaceBehavior*)res;
}
