#include "UAnimNotify.hpp"
#include "UAnimNotify_PlayMontageNotify.hpp"
UAnimNotify_PlayMontageNotify* UAnimNotify_PlayMontageNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify");
    return (UAnimNotify_PlayMontageNotify*)res;
}
