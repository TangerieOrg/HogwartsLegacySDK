#include "FAudioCaptureDeviceInfo.hpp"
#include "UAudioCapture.hpp"
#include "UAudioGenerator.hpp"
#include "UFunction.hpp"
UAudioCapture* UAudioCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioCapture.AudioCapture");
    return (UAudioCapture*)res;
}
bool UAudioCapture::GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo"));
    struct Params_GetAudioCaptureDeviceInfo {
        FAudioCaptureDeviceInfo OutInfo; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetAudioCaptureDeviceInfo params{};
    params.OutInfo = (FAudioCaptureDeviceInfo)OutInfo;
    ProcessEvent(func, &params);
    OutInfo = params.OutInfo;
    return (bool)params.ReturnValue;
}
void UAudioCapture::StopCapturingAudio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioCapture.AudioCapture.StopCapturingAudio"));
    struct Params_StopCapturingAudio {
    }; // Size: 0x0
    Params_StopCapturingAudio params{};
    ProcessEvent(func, &params);
}
void UAudioCapture::StartCapturingAudio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioCapture.AudioCapture.StartCapturingAudio"));
    struct Params_StartCapturingAudio {
    }; // Size: 0x0
    Params_StartCapturingAudio params{};
    ProcessEvent(func, &params);
}
bool UAudioCapture::IsCapturingAudio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioCapture.AudioCapture.IsCapturingAudio"));
    struct Params_IsCapturingAudio {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCapturingAudio params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
