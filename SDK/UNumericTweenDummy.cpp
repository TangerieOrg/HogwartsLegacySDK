#include "UNumericTweenDummy.hpp"
#include "UObject.hpp"
UNumericTweenDummy* UNumericTweenDummy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NumericTweenDummy");
    return (UNumericTweenDummy*)res;
}
