#include "ECollisionChannel.hpp"
#include "FSoftClassPath.hpp"
#include "UAIAsyncTaskBlueprintProxy.hpp"
#include "UAIHotSpotManager.hpp"
#include "UAIPerceptionSystem.hpp"
#include "UAISystem.hpp"
#include "UAISystemBase.hpp"
#include "UBehaviorTreeManager.hpp"
#include "UEnvQueryManager.hpp"
#include "UFunction.hpp"
#include "UNavLocalGridManager.hpp"
void UAISystem::AILoggingVerbose() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISystem.AILoggingVerbose"));
    struct Params_AILoggingVerbose {
    }; // Size: 0x0
    Params_AILoggingVerbose params{};
    ProcessEvent(func, &params);
}
UAISystem* UAISystem::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISystem");
    return (UAISystem*)res;
}
void UAISystem::AIIgnorePlayers() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISystem.AIIgnorePlayers"));
    struct Params_AIIgnorePlayers {
    }; // Size: 0x0
    Params_AIIgnorePlayers params{};
    ProcessEvent(func, &params);
}
