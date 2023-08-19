#include "UAnimNotify.hpp"
#include "UAnimNotify_RiderAbleEvent.hpp"
UAnimNotify_RiderAbleEvent* UAnimNotify_RiderAbleEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_RiderAbleEvent");
    return (UAnimNotify_RiderAbleEvent*)res;
}
