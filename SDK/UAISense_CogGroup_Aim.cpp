#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_Aim.hpp"
UAISense_CogGroup_Aim* UAISense_CogGroup_Aim::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_Aim");
    return (UAISense_CogGroup_Aim*)res;
}
