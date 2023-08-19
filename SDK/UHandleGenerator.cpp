#include "UHandleGenerator.hpp"
#include "UObject.hpp"
UHandleGenerator* UHandleGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.HandleGenerator");
    return (UHandleGenerator*)res;
}
