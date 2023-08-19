#include "EAISenseNotifyType.hpp"
#include "UAIPerceptionSystem.hpp"
#include "UAISense.hpp"
#include "UObject.hpp"
UAISense* UAISense::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense");
    return (UAISense*)res;
}
