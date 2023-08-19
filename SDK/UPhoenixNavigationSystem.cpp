#include "UNavigationSystemV1.hpp"
#include "UPhoenixNavigationSystem.hpp"
UPhoenixNavigationSystem* UPhoenixNavigationSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixNavigationSystem");
    return (UPhoenixNavigationSystem*)res;
}
