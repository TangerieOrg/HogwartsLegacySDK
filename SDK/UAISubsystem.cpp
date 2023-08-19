#include "UAISubsystem.hpp"
#include "UAISystem.hpp"
#include "UObject.hpp"
UAISubsystem* UAISubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISubsystem");
    return (UAISubsystem*)res;
}
