#include "FPathPointTags.hpp"
#include "FVector.hpp"
#include "UMapPath.hpp"
#include "UObject.hpp"
UMapPath* UMapPath::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapPath");
    return (UMapPath*)res;
}
