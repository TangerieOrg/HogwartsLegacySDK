#include "FEphemerisBasisPerLevel.hpp"
#include "UDataAsset.hpp"
#include "UEphemerisBasis.hpp"
#include "UEphemerisBasisLibrary.hpp"
UEphemerisBasisLibrary* UEphemerisBasisLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisBasisLibrary");
    return (UEphemerisBasisLibrary*)res;
}
