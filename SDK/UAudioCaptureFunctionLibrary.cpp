#include "UAudioCapture.hpp"
#include "UAudioCaptureFunctionLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAudioCaptureFunctionLibrary* UAudioCaptureFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioCapture.AudioCaptureFunctionLibrary");
    return (UAudioCaptureFunctionLibrary*)res;
}
UAudioCapture* UAudioCaptureFunctionLibrary::CreateAudioCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture"));
    struct Params_CreateAudioCapture {
        UAudioCapture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_CreateAudioCapture params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAudioCapture*)params.ReturnValue;
}
