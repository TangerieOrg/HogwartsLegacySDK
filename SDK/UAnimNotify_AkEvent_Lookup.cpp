#include "FGameplayTagContainer.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_AkEvent_Lookup.hpp"
UAnimNotify_AkEvent_Lookup* UAnimNotify_AkEvent_Lookup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_AkEvent_Lookup");
    return (UAnimNotify_AkEvent_Lookup*)res;
}
