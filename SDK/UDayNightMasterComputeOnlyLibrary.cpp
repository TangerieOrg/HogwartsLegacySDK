#include "FDayNightMasterComputeOnlyPerLevel.hpp"
#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "UDayNightMasterComputeOnlyLibrary.hpp"
UDayNightMasterComputeOnlyLibrary* UDayNightMasterComputeOnlyLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightMasterComputeOnlyLibrary");
    return (UDayNightMasterComputeOnlyLibrary*)res;
}
