#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskTutorial.hpp"
UAIPerformTaskTutorial* UAIPerformTaskTutorial::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskTutorial");
    return (UAIPerformTaskTutorial*)res;
}
