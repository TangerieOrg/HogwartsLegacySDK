#include "EOcclusionOption.hpp"
#include "EOcclusionTestMethod.hpp"
#include "UAkAudioEvent.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_AkEvent_Ava.hpp"
UAnimNotify_AkEvent_Ava* UAnimNotify_AkEvent_Ava::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_AkEvent_Ava");
    return (UAnimNotify_AkEvent_Ava*)res;
}
