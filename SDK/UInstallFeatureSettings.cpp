#include "FInstallFeature.hpp"
#include "UInstallFeatureSettings.hpp"
#include "UObject.hpp"
UInstallFeatureSettings* UInstallFeatureSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstallFeatureSettings");
    return (UInstallFeatureSettings*)res;
}
