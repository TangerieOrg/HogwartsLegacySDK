#include "UAnimNotifyState.hpp"
#include "UAnimNotify_PlayMontageNotifyWindow.hpp"
UAnimNotify_PlayMontageNotifyWindow* UAnimNotify_PlayMontageNotifyWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
    return (UAnimNotify_PlayMontageNotifyWindow*)res;
}
