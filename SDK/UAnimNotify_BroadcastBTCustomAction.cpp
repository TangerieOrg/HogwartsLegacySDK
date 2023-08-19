#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_BroadcastBTCustomAction.hpp"
UAnimNotify_BroadcastBTCustomAction* UAnimNotify_BroadcastBTCustomAction::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.AnimNotify_BroadcastBTCustomAction");
    return (UAnimNotify_BroadcastBTCustomAction*)res;
}
