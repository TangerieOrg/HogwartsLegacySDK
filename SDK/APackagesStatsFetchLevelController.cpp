#include "AActor.hpp"
#include "APackagesStatsFetchLevelController.hpp"
#include "UPackageStatsCaptureSettings.hpp"
#include "UWorldStructureDescGenerator.hpp"
APackagesStatsFetchLevelController* APackagesStatsFetchLevelController::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamingComplexityToolRuntime.PackagesStatsFetchLevelController");
    return (APackagesStatsFetchLevelController*)res;
}
