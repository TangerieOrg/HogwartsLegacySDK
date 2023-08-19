#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_Interact.hpp"
UAISense_CogGroup_Interact* UAISense_CogGroup_Interact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_Interact");
    return (UAISense_CogGroup_Interact*)res;
}
