#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_InsertBehaviorAfter.hpp"
#include "UClass.hpp"
UBTT_Camera_InsertBehaviorAfter* UBTT_Camera_InsertBehaviorAfter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_InsertBehaviorAfter");
    return (UBTT_Camera_InsertBehaviorAfter*)res;
}
