#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_Station.hpp"
UAISense_CogGroup_Station* UAISense_CogGroup_Station::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_Station");
    return (UAISense_CogGroup_Station*)res;
}
