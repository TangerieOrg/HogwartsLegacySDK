#include "UDataAsset.hpp"
#include "UMaterialInterface.hpp"
#include "UTransfigurationColorConfiguration.hpp"
UTransfigurationColorConfiguration* UTransfigurationColorConfiguration::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationColorConfiguration");
    return (UTransfigurationColorConfiguration*)res;
}
