#include "UEngineCustomTimeStep.hpp"
#include "UObject.hpp"
UEngineCustomTimeStep* UEngineCustomTimeStep::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EngineCustomTimeStep");
    return (UEngineCustomTimeStep*)res;
}
