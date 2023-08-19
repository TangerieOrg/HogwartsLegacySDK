#include "UAnimNotify_AkEvent_Lookup.hpp"
#include "UAnimNotify_Ak_Lookup_IsMounted.hpp"
UAnimNotify_Ak_Lookup_IsMounted* UAnimNotify_Ak_Lookup_IsMounted::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_Ak_Lookup_IsMounted");
    return (UAnimNotify_Ak_Lookup_IsMounted*)res;
}
