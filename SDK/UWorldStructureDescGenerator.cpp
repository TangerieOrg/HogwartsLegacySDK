#include "UObject.hpp"
#include "UWorld.hpp"
#include "UWorldStructureDescGenerator.hpp"
UWorldStructureDescGenerator* UWorldStructureDescGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamingComplexityToolRuntime.WorldStructureDescGenerator");
    return (UWorldStructureDescGenerator*)res;
}
