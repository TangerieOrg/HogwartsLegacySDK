#include "FNode.hpp"
#include "FTransformBase.hpp"
#include "UObject.hpp"
#include "URig.hpp"
URig* URig::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Rig");
    return (URig*)res;
}
