#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Touch.hpp"
UAISenseConfig_Touch* UAISenseConfig_Touch::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig_Touch");
    return (UAISenseConfig_Touch*)res;
}
