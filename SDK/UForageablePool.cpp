#include "UForageablePool.hpp"
#include "UObject.hpp"
UForageablePool* UForageablePool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ForageablePool");
    return (UForageablePool*)res;
}
