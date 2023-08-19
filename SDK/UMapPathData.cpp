#include "UMapPath.hpp"
#include "UMapPathData.hpp"
#include "UObject.hpp"
UMapPathData* UMapPathData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapPathData");
    return (UMapPathData*)res;
}
