#include "UAIPerceptionListenerInterface.hpp"
#include "UInterface.hpp"
UAIPerceptionListenerInterface* UAIPerceptionListenerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIPerceptionListenerInterface");
    return (UAIPerceptionListenerInterface*)res;
}
