#include "UAmbulatory_Data.hpp"
#include "UCurveFloat.hpp"
#include "UDataAsset.hpp"
UAmbulatory_Data* UAmbulatory_Data::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.Ambulatory_Data");
    return (UAmbulatory_Data*)res;
}
