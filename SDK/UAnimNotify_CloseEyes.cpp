#include "UAnimNotifyState.hpp"
#include "UAnimNotify_CloseEyes.hpp"
#include "UPoseSampler_CloseEyes.hpp"
UAnimNotify_CloseEyes* UAnimNotify_CloseEyes::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimNotify_CloseEyes");
    return (UAnimNotify_CloseEyes*)res;
}
