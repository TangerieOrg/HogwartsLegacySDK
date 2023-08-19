#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_Oppugno.hpp"
UAISense_CogGroup_Oppugno* UAISense_CogGroup_Oppugno::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_Oppugno");
    return (UAISense_CogGroup_Oppugno*)res;
}
