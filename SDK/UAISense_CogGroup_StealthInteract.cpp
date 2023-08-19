#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_StealthInteract.hpp"
UAISense_CogGroup_StealthInteract* UAISense_CogGroup_StealthInteract::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_StealthInteract");
    return (UAISense_CogGroup_StealthInteract*)res;
}
