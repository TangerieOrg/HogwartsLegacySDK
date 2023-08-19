#include "URUserVectorArtData.hpp"
#include "USlateVectorArtData.hpp"
URUserVectorArtData* URUserVectorArtData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RUserVectorArtData");
    return (URUserVectorArtData*)res;
}
