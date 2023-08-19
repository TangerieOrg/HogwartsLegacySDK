#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_Climb.hpp"
UAISense_CogGroup_Climb* UAISense_CogGroup_Climb::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_Climb");
    return (UAISense_CogGroup_Climb*)res;
}
