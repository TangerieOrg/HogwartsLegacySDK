#include "UObject.hpp"
#include "UVanishmentQueue.hpp"
UVanishmentQueue* UVanishmentQueue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VanishmentQueue");
    return (UVanishmentQueue*)res;
}
