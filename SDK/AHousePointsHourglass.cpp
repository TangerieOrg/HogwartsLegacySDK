#include "AActor.hpp"
#include "AHousePointsHourglass.hpp"
AHousePointsHourglass* AHousePointsHourglass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HousePointsHourglass");
    return (AHousePointsHourglass*)res;
}
void AHousePointsHourglass::CheckHousesScore() {}
void AHousePointsHourglass::UpdateFinalHouseScore() {}
