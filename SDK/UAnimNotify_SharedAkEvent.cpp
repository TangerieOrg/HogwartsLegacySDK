#include "UAnimNotify.hpp"
#include "UAnimNotify_SharedAkEvent.hpp"
UAnimNotify_SharedAkEvent* UAnimNotify_SharedAkEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_SharedAkEvent");
    return (UAnimNotify_SharedAkEvent*)res;
}
