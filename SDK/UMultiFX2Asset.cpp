#include "UDataAsset.hpp"
#include "UMultiFX2Asset.hpp"
#include "UMultiFX2_Base.hpp"
UMultiFX2Asset* UMultiFX2Asset::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.MultiFX2Asset");
    return (UMultiFX2Asset*)res;
}
