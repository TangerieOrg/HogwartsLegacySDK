#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_DisableRootMotion.hpp"
UAnimNotifyState_DisableRootMotion* UAnimNotifyState_DisableRootMotion::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotifyState_DisableRootMotion");
    return (UAnimNotifyState_DisableRootMotion*)res;
}
