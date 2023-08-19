#include "EPerformTaskHogwarsExpressSettings.hpp"
#include "FVector.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskSpawnHogwartsExpress.hpp"
UAIPerformTaskSpawnHogwartsExpress* UAIPerformTaskSpawnHogwartsExpress::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskSpawnHogwartsExpress");
    return (UAIPerformTaskSpawnHogwartsExpress*)res;
}
