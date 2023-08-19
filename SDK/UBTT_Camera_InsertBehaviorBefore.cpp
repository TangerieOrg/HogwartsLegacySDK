#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_InsertBehaviorBefore.hpp"
#include "UClass.hpp"
UBTT_Camera_InsertBehaviorBefore* UBTT_Camera_InsertBehaviorBefore::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_InsertBehaviorBefore");
    return (UBTT_Camera_InsertBehaviorBefore*)res;
}
