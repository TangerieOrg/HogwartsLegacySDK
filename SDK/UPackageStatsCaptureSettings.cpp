#include "UDataAsset.hpp"
#include "UPackageStatsCaptureSettings.hpp"
UPackageStatsCaptureSettings* UPackageStatsCaptureSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamingComplexityToolRuntime.PackageStatsCaptureSettings");
    return (UPackageStatsCaptureSettings*)res;
}
