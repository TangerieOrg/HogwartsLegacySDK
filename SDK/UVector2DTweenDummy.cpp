#include "UObject.hpp"
#include "UVector2DTweenDummy.hpp"
UVector2DTweenDummy* UVector2DTweenDummy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Vector2DTweenDummy");
    return (UVector2DTweenDummy*)res;
}
