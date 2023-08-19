#include "UGameInstanceSubsystem.hpp"
#include "UReplaySubsystem.hpp"
UReplaySubsystem* UReplaySubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReplaySubsystem");
    return (UReplaySubsystem*)res;
}
