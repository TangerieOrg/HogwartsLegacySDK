#include "UDynamicSubsystem.hpp"
#include "UEngineSubsystem.hpp"
UEngineSubsystem* UEngineSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EngineSubsystem");
    return (UEngineSubsystem*)res;
}
