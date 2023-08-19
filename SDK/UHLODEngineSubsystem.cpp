#include "UEngineSubsystem.hpp"
#include "UHLODEngineSubsystem.hpp"
UHLODEngineSubsystem* UHLODEngineSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HLODEngineSubsystem");
    return (UHLODEngineSubsystem*)res;
}
