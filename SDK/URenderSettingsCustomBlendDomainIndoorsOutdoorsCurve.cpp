#include "ERenderSettingsIndoorsType.hpp"
#include "UCurveFloat.hpp"
#include "URenderSettingsCustomBlendDomainIndoorsOutdoorsCurve.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainIndoorsOutdoorsCurve* URenderSettingsCustomBlendDomainIndoorsOutdoorsCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainIndoorsOutdoorsCurve");
    return (URenderSettingsCustomBlendDomainIndoorsOutdoorsCurve*)res;
}
