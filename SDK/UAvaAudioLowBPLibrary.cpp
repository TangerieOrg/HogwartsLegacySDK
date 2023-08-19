#include "UAvaAudioLowBPLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAvaAudioLowBPLibrary* UAvaAudioLowBPLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAudioLow.AvaAudioLowBPLibrary");
    return (UAvaAudioLowBPLibrary*)res;
}
float UAvaAudioLowBPLibrary::AvaAudioLowSampleFunction(float Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAudioLow.AvaAudioLowBPLibrary.AvaAudioLowSampleFunction"));
    struct Params_AvaAudioLowSampleFunction {
        float Param; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_AvaAudioLowSampleFunction params{};
    params.Param = (float)Param;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
