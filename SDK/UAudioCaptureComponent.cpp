#include "UAudioCaptureComponent.hpp"
#include "USynthComponent.hpp"
UAudioCaptureComponent* UAudioCaptureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioCapture.AudioCaptureComponent");
    return (UAudioCaptureComponent*)res;
}
