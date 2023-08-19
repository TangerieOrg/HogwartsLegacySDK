#include "AActor.hpp"
#include "APointOfInterestMarkup.hpp"
#include "EPointOfInterestState.hpp"
#include "FDbSingleColumnInfo.hpp"
APointOfInterestMarkup* APointOfInterestMarkup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PointOfInterestMarkup");
    return (APointOfInterestMarkup*)res;
}
