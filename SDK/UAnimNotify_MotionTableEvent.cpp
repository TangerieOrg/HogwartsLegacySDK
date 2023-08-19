#include "UAnimNotify.hpp"
#include "UAnimNotify_MotionTableEvent.hpp"
UAnimNotify_MotionTableEvent* UAnimNotify_MotionTableEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AnimNotify_MotionTableEvent");
    return (UAnimNotify_MotionTableEvent*)res;
}
