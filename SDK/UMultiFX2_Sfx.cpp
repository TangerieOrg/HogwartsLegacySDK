#include "EAkCallbackType.hpp"
#include "ESfxOcclusion.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkCallbackInfo.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_Sfx.hpp"
UMultiFX2_Sfx* UMultiFX2_Sfx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Sfx");
    return (UMultiFX2_Sfx*)res;
}
void UMultiFX2_Sfx::OnAkPostEventFunc(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2_Sfx.OnAkPostEventFunc"));
    struct Params_OnAkPostEventFunc {
        EAkCallbackType CallbackType; // 0x0
        char pad_1[0x7];
        UAkCallbackInfo* CallbackInfo; // 0x8
    }; // Size: 0x10
    Params_OnAkPostEventFunc params{};
    params.CallbackType = (EAkCallbackType)CallbackType;
    params.CallbackInfo = (UAkCallbackInfo*)CallbackInfo;
    ProcessEvent(func, &params);
}
