#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskSetCompanion.hpp"
UAIPerformTaskSetCompanion* UAIPerformTaskSetCompanion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskSetCompanion");
    return (UAIPerformTaskSetCompanion*)res;
}
