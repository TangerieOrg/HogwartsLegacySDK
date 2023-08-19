#include "UMastermindDebugCommandManager.hpp"
#include "UObject.hpp"
#include "UPhoenixMMDebugCommandManager.hpp"
UPhoenixMMDebugCommandManager* UPhoenixMMDebugCommandManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixMMDebugCommandManager");
    return (UPhoenixMMDebugCommandManager*)res;
}
