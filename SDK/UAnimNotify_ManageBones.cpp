#include "UAnimNotifyState.hpp"
#include "UAnimNotify_ManageBones.hpp"
UAnimNotify_ManageBones* UAnimNotify_ManageBones::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_ManageBones");
    return (UAnimNotify_ManageBones*)res;
}
