#include "UDestructibleInterface.hpp"
#include "UInterface.hpp"
UDestructibleInterface* UDestructibleInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DestructibleInterface");
    return (UDestructibleInterface*)res;
}
