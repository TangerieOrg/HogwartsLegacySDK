#include "UTimeSource.hpp"
#include "UTimeSourceSanctuaryIdentityLightProbeCapture.hpp"
UTimeSourceSanctuaryIdentityLightProbeCapture* UTimeSourceSanctuaryIdentityLightProbeCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TimeSourceSanctuaryIdentityLightProbeCapture");
    return (UTimeSourceSanctuaryIdentityLightProbeCapture*)res;
}
