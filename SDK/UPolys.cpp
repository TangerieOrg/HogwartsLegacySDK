#include "UObject.hpp"
#include "UPolys.hpp"
UPolys* UPolys::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Polys");
    return (UPolys*)res;
}
