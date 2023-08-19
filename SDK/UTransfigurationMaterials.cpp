#include "UDataAsset.hpp"
#include "UMaterialInterface.hpp"
#include "UTransfigurationMaterials.hpp"
UTransfigurationMaterials* UTransfigurationMaterials::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationMaterials");
    return (UTransfigurationMaterials*)res;
}
