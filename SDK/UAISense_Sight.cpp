#include "UAISense.hpp"
#include "UAISense_Sight.hpp"
UAISense_Sight* UAISense_Sight::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense_Sight");
    return (UAISense_Sight*)res;
}
