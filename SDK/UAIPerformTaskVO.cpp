#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskVO.hpp"
UAIPerformTaskVO* UAIPerformTaskVO::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskVO");
    return (UAIPerformTaskVO*)res;
}
