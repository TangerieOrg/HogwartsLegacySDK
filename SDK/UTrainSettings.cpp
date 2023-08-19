#include "UObject.hpp"
#include "UTrainSettings.hpp"
UTrainSettings* UTrainSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TrainSettings");
    return (UTrainSettings*)res;
}
