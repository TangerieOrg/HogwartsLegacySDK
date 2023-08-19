#include "ULocalPlayer.hpp"
#include "UObject.hpp"
#include "UWorld.hpp"
#include "UWorldSupportLevel.hpp"
#include "UWorldSupportWorld.hpp"
UWorldSupportWorld* UWorldSupportWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldSupportWorld");
    return (UWorldSupportWorld*)res;
}
