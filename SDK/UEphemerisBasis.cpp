#include "FTopographicObserver.hpp"
#include "UCurveFloat.hpp"
#include "UDataAsset.hpp"
#include "UDataTable.hpp"
#include "UEphemerisBasis.hpp"
#include "UStarCatalog.hpp"
UEphemerisBasis* UEphemerisBasis::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisBasis");
    return (UEphemerisBasis*)res;
}
